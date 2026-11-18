// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b401e80

UClass * __cdecl UDS_AbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityData",
               &Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_AbilityData>,InternalVTableHelperCtorCaller<UDS_AbilityData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton;
}

// UDS_AbilityData @ 14b406560

UDS_AbilityData * __thiscall
UDS_AbilityData::UDS_AbilityData(UDS_AbilityData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityData__6B_;
  return this;
}

// UDS_AbilityData @ 14b406590

UDS_AbilityData * __thiscall
UDS_AbilityData::UDS_AbilityData(UDS_AbilityData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_AbilityData__6B_;
  return this;
}

// ~UDS_AbilityData @ 14b407a70

void __thiscall UDS_AbilityData::~UDS_AbilityData(UDS_AbilityData *this)

{
  *(undefined ***)this = &___7UDS_AbilityData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4096c0

UClass * __cdecl UDS_AbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilityData",
               &Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton,
               StaticRegisterNativesUDS_AbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_AbilityData>,InternalVTableHelperCtorCaller<UDS_AbilityData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_AbilityData @ 14b40ad90

void __cdecl UDS_AbilityData::StaticRegisterNativesUDS_AbilityData(void)

{
  return;
}

// FindOrAddData @ 14b9eba60

TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14b9ef480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> __cdecl
UDS_AbilityData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14b9ef70f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14b9ef51b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14b9ef51b;
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
    bVar2 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14b9ef5e5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14b9ef5e5;
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
      bVar2 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_AbilityData_NoRegister();
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
          goto LAB_14b9ef716;
        }
      }
    }
  }
LAB_14b9ef70f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14b9ef716:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

