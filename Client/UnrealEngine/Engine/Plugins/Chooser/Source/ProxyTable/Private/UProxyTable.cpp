// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 12

// StaticClass @ 14cf24c30

UClass * __cdecl UProxyTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTable",
               &Z_Registration_Info_UClass_UProxyTable.InnerSingleton,
               StaticRegisterNativesUProxyTable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProxyTable>,InternalVTableHelperCtorCaller<UProxyTable>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTable.InnerSingleton;
}

// UProxyTable @ 14cf26830

UProxyTable * __thiscall UProxyTable::UProxyTable(UProxyTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UProxyTable__6B_;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  (this->RuntimeValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeValues).ArrayNum = 0;
  (this->RuntimeValues).ArrayMax = 0;
  return this;
}

// UProxyTable @ 14cf26870

UProxyTable * __thiscall UProxyTable::UProxyTable(UProxyTable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UProxyTable__6B_;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  (this->RuntimeValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeValues).ArrayNum = 0;
  (this->RuntimeValues).ArrayMax = 0;
  return this;
}

// ~UProxyTable @ 14cf269b0

void __thiscall UProxyTable::~UProxyTable(UProxyTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UProxyTable__6B_;
  DestructItems<FRuntimeProxyValue,int>
            ((FRuntimeProxyValue *)(this->RuntimeValues).AllocatorInstance.Data,
             (this->RuntimeValues).ArrayNum);
  pFVar1 = (this->RuntimeValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14cf26e20

void __thiscall UProxyTable::BeginDestroy(UProxyTable *this)

{
  int *piVar1;
  
  DestructItems<FRuntimeProxyValue,int>
            ((FRuntimeProxyValue *)(this->RuntimeValues).AllocatorInstance.Data,
             (this->RuntimeValues).ArrayNum);
  piVar1 = &(this->RuntimeValues).ArrayMax;
  (this->RuntimeValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->RuntimeValues).AllocatorInstance,0,piVar1);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// FindProxyObject @ 14cf27370

UObject * __thiscall
UProxyTable::FindProxyObject(UProxyTable *this,FGuid *param_1,FChooserEvaluationContext *param_2)

{
  FRuntimeProxyValue *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  FObjectChooserBase *pFVar6;
  uint uVar7;
  TLess<void> local_res8;
  
  uVar4 = Algo::BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Keys,param_1,local_res8);
  if (uVar4 == 0xffffffff) {
    return (UObject *)0x0;
  }
  uVar7 = 0;
  if ((int)uVar4 < (this->RuntimeValues).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  pFVar1 = (FRuntimeProxyValue *)
           ((this->RuntimeValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28);
  pFVar6 = FInstancedStruct::Get<FObjectChooserBase_const_>(&pFVar1->Value);
  pUVar5 = (UObject *)(**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,param_2);
  OutputStructData(this,pFVar1,param_2);
  return pUVar5;
}

// FindProxyObjectMulti @ 14cf27480

EIteratorStatus __thiscall
UProxyTable::FindProxyObjectMulti
          (UProxyTable *this,FGuid *param_1,FChooserEvaluationContext *param_2,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  FRuntimeProxyValue *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EIteratorStatus EVar5;
  FObjectChooserBase *pFVar6;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar7;
  uint uVar8;
  TLess<void> local_res8;
  undefined1 local_38 [32];
  
  uVar4 = Algo::BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Keys,param_1,local_res8);
  if (uVar4 == 0xffffffff) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    return Continue;
  }
  uVar8 = 0;
  if ((int)uVar4 < (this->RuntimeValues).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
  }
  pFVar1 = (FRuntimeProxyValue *)
           ((this->RuntimeValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28);
  pFVar6 = FInstancedStruct::Get<FObjectChooserBase_const_>(&pFVar1->Value);
  pcVar2 = *(code **)((longlong)*pFVar6 + 0x30);
  pTVar7 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           ::
           TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                     (local_38,param_3);
  EVar5 = (*pcVar2)(pFVar6,param_2,pTVar7);
  OutputStructData(this,pFVar1,param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return EVar5;
}

// GetPrivateStaticClass @ 14cf27960

UClass * __cdecl UProxyTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTable",
               &Z_Registration_Info_UClass_UProxyTable.InnerSingleton,
               StaticRegisterNativesUProxyTable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProxyTable>,InternalVTableHelperCtorCaller<UProxyTable>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTable.InnerSingleton;
}

// IterateProxyObjects @ 14cf27d40

EIteratorStatus __thiscall
UProxyTable::IterateProxyObjects
          (UProxyTable *this,FGuid *param_1,FChooserEvaluationContext *param_2,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EIteratorStatus EVar4;
  FObjectChooserBase *pFVar5;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar6;
  uint uVar7;
  TLess<void> local_res8;
  undefined1 local_28 [32];
  
  uVar3 = Algo::BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Keys,param_1,local_res8);
  if (uVar3 == 0xffffffff) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    EVar4 = Continue;
  }
  else {
    uVar7 = 0;
    if ((int)uVar3 < (this->RuntimeValues).ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
    }
    pFVar5 = FInstancedStruct::Get<FObjectChooserBase_const_>
                       ((FInstancedStruct *)
                        ((this->RuntimeValues).AllocatorInstance.Data +
                        ((longlong)(int)uVar3 * 5 + 1) * 8));
    pcVar1 = *(code **)((longlong)*pFVar5 + 0x38);
    pTVar6 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             ::
             TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                       (local_28,param_3);
    EVar4 = (*pcVar1)(pFVar5,param_2,pTVar6);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  }
  return EVar4;
}

// IterateProxyObjects @ 14cf27e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EIteratorStatus __thiscall
UProxyTable::IterateProxyObjects
          (UProxyTable *this,FGuid *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EIteratorStatus EVar5;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *this_00;
  FObjectChooserBase *pFVar6;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar7;
  uint uVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  TLess<void> local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8;
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  EVar5 = Continue;
  local_c0 = 0;
  local_b8 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_64 = 4;
  local_40 = 0;
  local_3c = 4;
  this_00 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
            ::
            TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                      (local_f0,param_2);
  uVar4 = Algo::BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Keys,param_1,local_f8);
  if (uVar4 != 0xffffffff) {
    iVar1 = (this->RuntimeValues).ArrayNum;
    uVar8 = 0;
    if ((int)uVar4 < iVar1) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_108 = (longlong)(int)uVar4;
      local_100 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    }
    pFVar6 = FInstancedStruct::Get<FObjectChooserBase_const_>
                       ((FInstancedStruct *)
                        ((this->RuntimeValues).AllocatorInstance.Data +
                        ((longlong)(int)uVar4 * 5 + 1) * 8));
    pcVar2 = *(code **)((longlong)*pFVar6 + 0x38);
    pTVar7 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             ::
             TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                       (local_d8,this_00);
    EVar5 = (*pcVar2)(pFVar6,&local_c0,pTVar7);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar5;
}

// PostLoad @ 14cf28430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UProxyTable::PostLoad(UProxyTable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  IHasContextClass *pIVar8;
  FChooserPropertyBinding *this_00;
  FChooserPropertyBinding *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FString local_38;
  
  UObject::PostLoad((UObject *)this);
  pFVar11 = (this->RuntimeValues).AllocatorInstance.Data;
  iVar2 = (this->RuntimeValues).ArrayNum;
  pFVar10 = pFVar11 + 0x20;
  pFVar1 = pFVar11 + (longlong)iVar2 * 0x28;
  do {
    while( true ) {
      if ((this->RuntimeValues).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRuntimeProxyValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) {
        return;
      }
      if (*(longlong *)pFVar11 == 0) break;
      plVar4 = *(longlong **)(pFVar10 + -0x10);
      if (((plVar4 != (longlong *)0x0) && (lVar7 = *(longlong *)(pFVar10 + -0x18), lVar7 != 0)) &&
         (pUVar6 = FObjectChooserBase::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar7 = *(longlong *)pFVar11 + 0x28;
          if (*(longlong *)pFVar11 == 0) {
            lVar7 = 0;
          }
          (**(code **)(*plVar4 + 8))(plVar4,lVar7);
        }
      }
      iVar3 = *(int *)pFVar10;
      this_00 = *(FChooserPropertyBinding **)(pFVar10 + -8);
      pFVar9 = (FChooserPropertyBinding *)((longlong)iVar3 * 0x40 + (longlong)this_00);
      while( true ) {
        if (*(int *)pFVar10 != iVar3) {
          `TCheckedPointerIterator<FProxyStructOutput,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (this_00 == pFVar9) break;
        pIVar8 = (IHasContextClass *)(*(longlong *)pFVar11 + 0x28);
        if (*(longlong *)pFVar11 == 0) {
          pIVar8 = (IHasContextClass *)0x0;
        }
        FChooserPropertyBinding::Compile(this_00,pIVar8,false);
        this_00 = (FChooserPropertyBinding *)&this_00[1].PropertyBindingChain.ArrayNum;
      }
LAB_14cf2859f:
      pFVar11 = pFVar11 + 0x28;
      pFVar10 = pFVar10 + 0x28;
    }
    if ((byte)LogChooser._0_1_ < 4) goto LAB_14cf2859f;
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChooser);
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14cf2859f;
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    pFVar11 = pFVar11 + 0x28;
    pFVar10 = pFVar10 + 0x28;
  } while( true );
}

// StaticRegisterNativesUProxyTable @ 14cf285f0

void __cdecl UProxyTable::StaticRegisterNativesUProxyTable(void)

{
  return;
}

