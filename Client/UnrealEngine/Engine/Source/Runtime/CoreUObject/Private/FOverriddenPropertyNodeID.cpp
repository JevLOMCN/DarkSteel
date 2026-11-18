// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// StaticStruct @ 1420e2170

UScriptStruct * __cdecl FOverriddenPropertyNodeID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID,(UObject *)pUVar1,
                         L"OverriddenPropertyNodeID");
  }
  return Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.OuterSingleton;
}

// FOverriddenPropertyNodeID @ 1420ea020

FOverriddenPropertyNodeID * __thiscall
FOverriddenPropertyNodeID::FOverriddenPropertyNodeID
          (FOverriddenPropertyNodeID *this,FOverriddenPropertyNodeID *param_1,
          FOverriddenPropertyNodeID *param_2)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  FOverriddenPropertyPath::FOverriddenPropertyPath(&this->Path,&param_1->Path);
  iVar3 = (this->Path).Path.ArrayNum;
  uVar5 = (param_2->Path).Path.ArrayNum + iVar3;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->Path).Path.ArrayMax;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,(ForAnyElementType *)this,iVar3,piVar1);
    }
    pFVar4 = (FName *)(param_2->Path).Path.AllocatorInstance.Data;
    iVar3 = (param_2->Path).Path.ArrayNum;
    pFVar2 = pFVar4 + iVar3;
    while( true ) {
      if ((param_2->Path).Path.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar2) break;
      FOverriddenPropertyPath::operator+=(&this->Path,*pFVar4);
      pFVar4 = pFVar4 + 1;
    }
    (this->Object).WeakPtr = (param_2->Object).WeakPtr;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// FOverriddenPropertyNodeID @ 1420ea0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOverriddenPropertyNodeID * __thiscall
FOverriddenPropertyNodeID::FOverriddenPropertyNodeID
          (FOverriddenPropertyNodeID *this,TNotNull<FProperty_const_*> param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FName *pFVar6;
  undefined1 auStackY_138 [32];
  FName local_e8 [15];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar5 = 0;
  local_64 = 10;
  (this->Path).Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Path).Path.ArrayMax;
  (this->Path).Path.ArrayNum = 0;
  (this->Path).CachedHash = 0;
  (this->Object).WeakPtr = (FWeakObjectPtr)0x0;
  *piVar1 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 10;
  local_28 = 0xffffffff;
  bVar3 = IsThisNotNull(param_1.Val,"FField::GetFName");
  if (bVar3) {
    lVar5 = (param_1.Val)->_padding_;
  }
  iVar2 = *piVar1;
  (this->Path).Path.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,iVar2,(ForAnyElementType *)this,1,piVar1);
  *(longlong *)(this->Path).Path.AllocatorInstance.Data = lVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
  (this->Path).CachedHash = uVar4 + (int)((ulonglong)lVar5 >> 0x20);
  for (pFVar6 = local_e8; pFVar6 != local_e8; pFVar6 = (FName *)&pFVar6[1].Number) {
    FOverriddenPropertyPath::operator+=(&this->Path,*pFVar6);
  }
  return this;
}

// FOverriddenPropertyNodeID @ 1420ea200

FOverriddenPropertyNodeID * __thiscall
FOverriddenPropertyNodeID::FOverriddenPropertyNodeID
          (FOverriddenPropertyNodeID *this,TNotNull<UObject_const_*> param_1)

{
  int *piVar1;
  FName FVar2;
  int iVar3;
  uint uVar4;
  FName *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &(this->Path).Path.ArrayMax;
  (this->Path).Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Path.ArrayNum = 0;
  *piVar1 = 0;
  (this->Path).CachedHash = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1.Val);
  }
  (this->Object).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FName)param_1.Val;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1.Val);
  }
  FWeakObjectPtr::operator=(&(this->Object).WeakPtr,(FObjectPtr)&local_res8);
  iVar3 = FUObjectArray::AllocateSerialNumber(&GUObjectArray,*(int *)&(param_1.Val)->field_0xc);
  ::FString::PrintfImpl(&local_28,L"ID_%d");
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  iVar6 = *piVar1;
  FVar2 = *pFVar5;
  (this->Path).Path.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,iVar6,(ForAnyElementType *)this,1,piVar1);
  *(FName *)(this->Path).Path.AllocatorInstance.Data = FVar2;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  (this->Path).CachedHash = uVar4 + FVar2.Number;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator== @ 1420ee7e0

bool __thiscall
FOverriddenPropertyNodeID::operator==
          (FOverriddenPropertyNodeID *this,FOverriddenPropertyNodeID *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  if ((this->Path).CachedHash == (param_1->Path).CachedHash) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->Object).WeakPtr,true,false);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(param_1->Object).WeakPtr,true,false);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(param_1->Object).WeakPtr,true);
      pUVar3 = FWeakObjectPtr::Get(&(this->Object).WeakPtr,true);
      return pUVar3 == pUVar2;
    }
  }
  return false;
}

// FromMapKey @ 1420f7f50

FOverriddenPropertyNodeID * __cdecl
FOverriddenPropertyNodeID::FromMapKey
          (FOverriddenPropertyNodeID *__return_storage_ptr__,FProperty *param_1,void *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TNotNull<UObject_const_*> TVar4;
  FOverriddenPropertyNodeID *pFVar5;
  FName *pFVar6;
  int iVar7;
  FName local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  wchar_t *local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  uint uStack_18;
  FWeakObjectPtr local_10;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
    local_38 = (wchar_t *)0x0;
    local_30 = 0;
    (**(code **)(param_1->_padding_ + 0xe0))
              (param_1,&local_38,param_2,0,0,0,in_stack_ffffffffffffffb8 & 0xffffffff00000000,0);
    local_28.Data = (FScriptContainerElement *)0x0;
    iStack_1c = 0;
    uStack_18 = 0;
    local_10.ObjectIndex = 0;
    local_10.ObjectSerialNumber = 0;
    iVar7 = (int)local_30 + -1;
    if ((int)local_30 == 0) {
      iVar7 = 0;
    }
    pFVar6 = ::FName::FName(&local_res10,iVar7,local_38,FNAME_Add);
    FVar1 = *pFVar6;
    local_20 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,iStack_1c,&local_28,1,&iStack_1c);
    *(FName *)local_28.Data = FVar1;
    uStack_18 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    (__return_storage_ptr__->Path).Path.AllocatorInstance.Data = local_28.Data;
    (__return_storage_ptr__->Path).Path.ArrayNum = local_20;
    uStack_18 = uStack_18 + FVar1.Number;
    (__return_storage_ptr__->Path).Path.ArrayMax = iStack_1c;
    (__return_storage_ptr__->Path).CachedHash = uStack_18;
    (__return_storage_ptr__->Object).WeakPtr = local_10;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    iStack_1c = 0;
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else {
    TVar4.Val = (UObject *)(**(code **)(param_1->_padding_ + 0x1f8))(param_1,param_2);
    if (TVar4.Val == (UObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0x189,L"This case is not handled");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FOverriddenPropertyNodeID *)(*pcVar2)();
        return pFVar5;
      }
      *(undefined8 *)&(__return_storage_ptr__->Path).CachedHash = 0;
      (__return_storage_ptr__->Path).Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Path).Path.ArrayNum = 0;
      (__return_storage_ptr__->Path).Path.ArrayMax = 0;
      (__return_storage_ptr__->Object).WeakPtr = (FWeakObjectPtr)0x0;
    }
    else {
      FOverriddenPropertyNodeID(__return_storage_ptr__,TVar4);
    }
  }
  return __return_storage_ptr__;
}

// HandleDeadObjectReferences @ 1420fdf60

void __thiscall
FOverriddenPropertyNodeID::HandleDeadObjectReferences
          (FOverriddenPropertyNodeID *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  UObject *pUVar1;
  UObject **ppUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Object).WeakPtr,true);
  if (pUVar1 != (UObject *)0x0) {
    ppUVar2 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Find
                        (param_1,pUVar1);
    if ((ppUVar2 == (UObject **)0x0) &&
       (ppUVar2 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Find
                            (param_2,pUVar1), ppUVar2 == (UObject **)0x0)) {
      return;
    }
    (this->Object).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// HandleObjectsReInstantiated @ 1420fe230

void __thiscall
FOverriddenPropertyNodeID::HandleObjectsReInstantiated
          (FOverriddenPropertyNodeID *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  UObject *pUVar1;
  UObject **ppUVar2;
  UObject *local_res8;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Object).WeakPtr,true);
  if (pUVar1 != (UObject *)0x0) {
    ppUVar2 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                      *)param_1,pUVar1);
    if (ppUVar2 != (UObject **)0x0) {
      local_res8 = *ppUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(&(this->Object).WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  return;
}

// RootNodeId @ 14210c4f0

FOverriddenPropertyNodeID * __cdecl
FOverriddenPropertyNodeID::RootNodeId(FOverriddenPropertyNodeID *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  uint uVar4;
  FName *pFVar5;
  FName local_res8;
  
  piVar1 = &(__return_storage_ptr__->Path).Path.ArrayMax;
  (__return_storage_ptr__->Path).Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Path).Path.ArrayNum = 0;
  (__return_storage_ptr__->Path).CachedHash = 0;
  (__return_storage_ptr__->Object).WeakPtr = (FWeakObjectPtr)0x0;
  *piVar1 = 0;
  pFVar5 = ::FName::FName(&local_res8,L"root");
  iVar2 = *piVar1;
  FVar3 = *pFVar5;
  (__return_storage_ptr__->Path).Path.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,iVar2,(ForAnyElementType *)__return_storage_ptr__,1,piVar1);
  *(FName *)(__return_storage_ptr__->Path).Path.AllocatorInstance.Data = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  (__return_storage_ptr__->Path).CachedHash = uVar4 + FVar3.Number;
  return __return_storage_ptr__;
}

// ToMapInternalIndex @ 142116c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

int __thiscall
FOverriddenPropertyNodeID::ToMapInternalIndex
          (FOverriddenPropertyNodeID *this,FScriptMapHelper *param_1)

{
  FName *pFVar1;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar2;
  code *pcVar3;
  TScriptSparseSet<FDefaultSetAllocator> *this_00;
  FFeedbackContext *pFVar4;
  FScriptMapHelper *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TNotNull<UObject_const_*> TVar9;
  FOverriddenPropertyNodeID *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FProperty *pFVar13;
  longlong lVar14;
  int iVar15;
  void *_Dst;
  undefined1 *puVar16;
  FName *pFVar17;
  ForAnyElementType FVar18;
  undefined1 auStack_138 [64];
  undefined1 local_f8 [4];
  int local_f4;
  int local_f0;
  int local_ec;
  FScriptMapHelper *local_e8;
  undefined8 local_e0;
  FString local_d8;
  FName local_c8;
  FProperty *local_c0;
  FProperty *local_b8;
  FString local_b0;
  code *local_a0;
  FProperty **local_98;
  code *local_90;
  code **local_88;
  code *local_80;
  FProperty **local_78;
  code *local_70;
  code **local_68;
  FOverriddenPropertyNodeID local_50;
  ulonglong local_30;
  
  puVar16 = auStack_138;
  local_30 = __security_cookie.value ^ (ulonglong)local_f8;
  pFVar13 = param_1->KeyProp;
  local_e8 = param_1;
  local_e0 = this;
  if ((pFVar13 != (FProperty *)0x0) && ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
    iVar15 = 0;
    iVar7 = (((param_1->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if (0 < iVar7) {
      do {
        local_f0 = iVar15;
        bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_1,(<lambda_1> *)&local_f0);
        if (bVar6) break;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar7);
    }
    local_f4 = iVar15;
    bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)&local_f4);
    if (bVar6) {
      do {
        pTVar2 = (param_1->field2_0x10).FreezableMap;
        pcVar3 = *(code **)(pFVar13->_padding_ + 0x1f8);
        if ((param_1->MapFlags & UsesMemoryImageAllocator) == None) {
          local_e8 = (FScriptMapHelper *)CONCAT44(local_e8._4_4_,iVar15);
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (param_1,(<lambda_1> *)&local_e8);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          lVar14 = (longlong)(iVar15 * (param_1->MapLayout).SetLayout.SparseArrayLayout.Size) +
                   (pTVar2->Pairs).Elements.Data._padding_;
        }
        else {
          local_ec = iVar15;
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (param_1,(<lambda_1> *)&local_ec);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          uVar11 = (pTVar2->Pairs).Elements.Data._padding_;
          if ((uVar11 & 1) != 0) {
            uVar11 = (longlong)&(pTVar2->Pairs).Elements.Data._padding_ + ((longlong)uVar11 >> 0x18)
            ;
          }
          lVar14 = (longlong)(iVar15 * (param_1->MapLayout).SetLayout.SparseArrayLayout.Size) +
                   uVar11;
        }
        TVar9.Val = (UObject *)(*pcVar3)(pFVar13,lVar14);
        if (TVar9.Val != (UObject *)0x0) {
          pFVar10 = FOverriddenPropertyNodeID(&local_50,TVar9);
          bVar6 = operator==(this,pFVar10);
          if (local_50.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Path.Path.AllocatorInstance.Data);
          }
          if (bVar6) goto LAB_14211707d;
        }
        iVar7 = (((param_1->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
        do {
          iVar15 = iVar15 + 1;
          if (iVar7 <= iVar15) break;
          uVar11 = (ulonglong)local_e0 >> 0x20;
          local_e0 = (FOverriddenPropertyNodeID *)CONCAT44((int)uVar11,iVar15);
          bVar6 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (param_1,(<lambda_1> *)&local_e0);
        } while (!bVar6);
        local_f4 = iVar15;
        bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_1,(<lambda_1> *)&local_f4);
      } while (bVar6);
    }
    iVar15 = -1;
    puVar16 = auStack_138;
    goto LAB_14211707d;
  }
  iVar7 = (param_1->MapLayout).SetLayout.Size;
  _Dst = (void *)0x0;
  puVar16 = auStack_138;
  if (iVar7 != 0) {
    uVar12 = (ulonglong)(iVar7 + 0xf);
    uVar11 = uVar12 + 0xf;
    if (uVar11 <= uVar12) {
      uVar11 = 0xffffffffffffff0;
    }
    _Dst = (void *)((longlong)&local_f0 + -(uVar11 & 0xfffffffffffffff0));
    puVar16 = auStack_138 + -(uVar11 & 0xfffffffffffffff0);
  }
  if (((uint)(int)pFVar13->PropertyFlags >> 9 & 1) == 0) {
    pcVar3 = *(code **)(pFVar13->_padding_ + 0x150);
    *(undefined8 *)(puVar16 + -8) = 0x142116e8c;
    (*pcVar3)(pFVar13);
  }
  else {
    iVar7 = pFVar13->ElementSize;
    iVar15 = pFVar13->ArrayDim;
    *(undefined8 *)(puVar16 + -8) = 0x142116e7b;
    memset(_Dst,0,(longlong)iVar7 * (longlong)iVar15);
  }
  pFVar10 = local_e0;
  pFVar17 = (FName *)(this->Path).Path.AllocatorInstance.Data;
  bVar6 = true;
  iVar7 = (this->Path).Path.ArrayNum;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  pFVar1 = pFVar17 + iVar7;
  while( true ) {
    if ((pFVar10->Path).Path.ArrayNum != iVar7) {
      *(undefined8 *)(puVar16 + -8) = 0x142116eb7;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    pFVar5 = local_e8;
    pFVar4 = GWarn;
    if (pFVar17 == pFVar1) break;
    if (bVar6) {
      bVar6 = false;
    }
    else {
      *(undefined8 *)(puVar16 + -8) = 0x142116edc;
      ::FString::AppendChars(&local_d8,L".",1);
    }
    local_c8 = *pFVar17;
    *(undefined8 *)(puVar16 + -8) = 0x142116ef0;
    ::FName::ToString(&local_c8,&local_b0);
    FVar18.Data = local_b0.Data.AllocatorInstance.Data;
    iVar15 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    *(undefined8 *)(puVar16 + -8) = 0x142116f0b;
    ::FString::AppendChars(&local_d8,(wchar_t *)FVar18.Data,iVar15);
    FVar18.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(puVar16 + -8) = 0x142116f19;
      FMemory::Free(FVar18.Data);
    }
    pFVar17 = pFVar17 + 1;
  }
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar18.Data = local_d8.Data.AllocatorInstance.Data;
  }
  pFVar13 = local_e8->KeyProp;
  *(undefined8 *)(puVar16 + -8) = 0x142116f49;
  bVar6 = FProperty::ValidateImportFlags(pFVar13,0,(FOutputDevice *)GWarn);
  if ((bVar6) && (FVar18.Data != (FScriptContainerElement *)0x0)) {
    lVar14 = pFVar13->_padding_;
    *(FFeedbackContext **)(puVar16 + 0x30) = pFVar4;
    *(undefined4 *)(puVar16 + 0x28) = 0x8000000;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    pcVar3 = *(code **)(lVar14 + 0xe8);
    *(undefined8 *)(puVar16 + -8) = 0x142116f79;
    (*pcVar3)(pFVar13,FVar18.Data,_Dst,0);
  }
  this_00 = (TScriptSparseSet<FDefaultSetAllocator> *)(pFVar5->field2_0x10).FreezableMap;
  pFVar13 = pFVar5->KeyProp;
  iVar7 = (this_00->Elements).Data.ArrayNum;
  if ((pFVar5->MapFlags & UsesMemoryImageAllocator) == None) {
    local_b8 = pFVar13;
    if (iVar7 == (this_00->Elements).NumFreeIndices) goto LAB_14211704b;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
               ::Call;
    local_78 = &local_b8;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
               ::Call;
    local_68 = &local_80;
    *(undefined8 *)(puVar16 + -8) = 0x142117026;
    uVar8 = FProperty::GetValueTypeHash(pFVar13,_Dst);
    *(code ***)(puVar16 + 0x20) = &local_70;
    *(undefined8 *)(puVar16 + -8) = 0x142117044;
    iVar15 = TScriptSparseSet<FDefaultSetAllocator>::FindIndexImpl
                       (this_00,_Dst,&(pFVar5->MapLayout).SetLayout,uVar8,
                        *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)(puVar16 + 0x20))
    ;
    pFVar13 = pFVar5->KeyProp;
  }
  else {
    local_c0 = pFVar13;
    if (iVar7 == *(int *)&(this_00->Elements).AllocationFlags.AllocatorInstance.SecondaryData.
                          field_0x4) {
LAB_14211704b:
      iVar15 = -1;
    }
    else {
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                 ::Call;
      local_98 = &local_c0;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
                 ::Call;
      local_88 = &local_a0;
      *(undefined8 *)(puVar16 + -8) = 0x142116fc4;
      uVar8 = FProperty::GetValueTypeHash(pFVar13,_Dst);
      *(code ***)(puVar16 + 0x20) = &local_90;
      *(undefined8 *)(puVar16 + -8) = 0x142116fdf;
      iVar15 = TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
               ::FindIndexImpl((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                                *)this_00,_Dst,&(pFVar5->MapLayout).SetLayout,uVar8,
                               *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)
                                (puVar16 + 0x20));
      pFVar13 = pFVar5->KeyProp;
    }
  }
  if ((pFVar13->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar3 = *(code **)(pFVar13->_padding_ + 0x138);
    *(undefined8 *)(puVar16 + -8) = 0x14211706d;
    (*pcVar3)(pFVar13,_Dst);
  }
  FVar18.Data = local_d8.Data.AllocatorInstance.Data;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar16 + -8) = 0x14211707b;
    FMemory::Free(FVar18.Data);
  }
LAB_14211707d:
  *(undefined8 *)(puVar16 + -8) = 0x14211708c;
  return iVar15;
}

// ToDebugString @ 142152c30

FString * __thiscall
FOverriddenPropertyNodeID::ToDebugString
          (FOverriddenPropertyNodeID *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  FWeakObjectPtr::Get(&(this->Object).WeakPtr);
  ::FString::PrintfImpl(&local_28,L"(0x%p)");
  pFVar1 = FOverriddenPropertyPath::ToString(&this->Path,&local_18);
  ::FString::ConcatFF(__return_storage_ptr__,pFVar1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

