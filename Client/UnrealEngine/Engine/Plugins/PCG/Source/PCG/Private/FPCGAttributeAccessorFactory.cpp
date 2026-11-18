// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// CreateSimpleAccessor @ 149e53850

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __thiscall
FPCGAttributeAccessorFactory::CreateSimpleAccessor
          (FPCGAttributeAccessorFactory *this,UPCGData *param_1,
          FPCGAttributePropertySelector *param_2,bool param_3)

{
  CallOnMethod<UPCGData,_FPCGAttributeAccessorFactory::CreateSimpleAccessor_::__l2::<lambda_1>_>
            (this,param_1,(<lambda_1> *)param_2);
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// CreateSimpleConstAccessor @ 149e538b0

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> __thiscall
FPCGAttributeAccessorFactory::CreateSimpleConstAccessor
          (FPCGAttributeAccessorFactory *this,UPCGData *param_1,
          FPCGAttributePropertySelector *param_2,bool param_3)

{
  CallOnMethod<UPCGData_const_,_FPCGAttributeAccessorFactory::CreateSimpleConstAccessor_::__l2::<lambda_1>_>
            (this,param_1,(<lambda_1> *)param_2);
  return (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>)
         (IPCGAttributeAccessor *)param_1;
}

// CreateSimpleConstKeys @ 149e53910

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__thiscall
FPCGAttributeAccessorFactory::CreateSimpleConstKeys
          (FPCGAttributeAccessorFactory *this,UPCGData *param_1,
          FPCGAttributePropertySelector *param_2,bool param_3)

{
  char in_stack_00000028;
  
  if (param_2 == (FPCGAttributePropertySelector *)0x0) {
    if ((in_stack_00000028 == '\0') && (1 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    param_1->_padding_ = 0;
    return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
            )(IPCGAttributeAccessorKeys *)param_1;
  }
  CallOnMethod<UPCGData_const_,_FPCGAttributeAccessorFactory::CreateSimpleConstKeys_::__l2::<lambda_1>_>
            (this,param_1,(<lambda_1> *)param_2);
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// CreateSimpleKeys @ 149e539b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __thiscall
FPCGAttributeAccessorFactory::CreateSimpleKeys
          (FPCGAttributeAccessorFactory *this,UPCGData *param_1,
          FPCGAttributePropertySelector *param_2,bool param_3)

{
  char in_stack_00000028;
  
  if (param_2 == (FPCGAttributePropertySelector *)0x0) {
    if ((in_stack_00000028 == '\0') && (1 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    param_1->_padding_ = 0;
    return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
           (IPCGAttributeAccessorKeys *)param_1;
  }
  CallOnMethod<UPCGData,_FPCGAttributeAccessorFactory::CreateSimpleKeys_::__l2::<lambda_1>_>
            (this,param_1,(<lambda_1> *)param_2);
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// GetInstance @ 149e59e60

FPCGAttributeAccessorFactory * __cdecl FPCGAttributeAccessorFactory::GetInstance(void)

{
  FPCGModule *pFVar1;
  
  pFVar1 = FPCGModule::GetPCGModuleChecked();
  return &pFVar1->AttributeAccessorFactory;
}

// GetMutableInstance @ 149e5c170

FPCGAttributeAccessorFactory * __cdecl FPCGAttributeAccessorFactory::GetMutableInstance(void)

{
  FPCGModule *pFVar1;
  
  pFVar1 = FPCGModule::GetPCGModuleChecked();
  return &pFVar1->AttributeAccessorFactory;
}

// RegisterDefaultMethods @ 149e82000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPCGAttributeAccessorFactory::RegisterDefaultMethods(FPCGAttributeAccessorFactory *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_108 [32];
  UClass *local_e8 [2];
  code *local_d8 [2];
  undefined **local_c8;
  code *local_c0;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_b0 = (undefined ***)0x0;
  local_c0 = PCGAttributeAccessorFactory::CreateDefaultAccessor;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
                ::Call;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_90 = PCGAttributeAccessorFactory::CreateDefaultConstAccessor;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = PCGAttributeAccessorFactory::CreateDefaultAccessorKeys;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = PCGAttributeAccessorFactory::CreateDefaultConstAccessorKeys;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_80 = (undefined ***)0x0;
  local_50 = (undefined ***)0x0;
  local_20 = (undefined ***)0x0;
  local_e8[0] = Z_Construct_UClass_UPCGData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8[0]);
  }
  RegisterMethods(this,(TSubclassOf<UPCGData>)local_e8,(FPCGAttributeAccessorMethods *)local_d8);
  if (local_48 != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar1 = local_50;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar1 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar1 = local_80;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar1 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar1 = local_b0;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// RegisterMethods @ 149e82180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGAttributeAccessorFactory::RegisterMethods
          (FPCGAttributeAccessorFactory *this,TSubclassOf<UPCGData> param_1,
          FPCGAttributeAccessorMethods *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  longlong lVar5;
  uint uVar6;
  TPairInitializer<TSubclassOf<UPCGData>_const_&,FPCGAttributeAccessorMethods_&&> local_res8;
  FString local_38;
  TObjectPtr<UClass> local_28;
  FPCGAttributeAccessorMethods *local_20;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar5 == 0) || (pUVar4 = Z_Construct_UClass_UPCGData_NoRegister(), pUVar4 == (UClass *)0x0))
  {
LAB_149e821de:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*PCGDataClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorFactory.cpp"
                       ,0x150,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar4->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_149e821de;
  }
  uVar6 = ((uint)(*(ulonglong *)param_1.Class.field0_0x0 >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)param_1.Class.field0_0x0 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UPCGData>_>
                    ((TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
                      *)this,uVar6 >> 0x10 ^ uVar6,(TSubclassOf<UPCGData> *)param_1.Class.field0_0x0
                    );
  if (iVar3 == -1) {
    local_28.field0_0x0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
    local_20 = param_2;
    TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSubclassOf<UPCGData>_const_&,FPCGAttributeAccessorMethods_&&>_>
              ((TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_28);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5020483982073003694>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorFactory.cpp"
                     ,0x152,"!AccessorMethods.Contains(PCGDataClass)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((byte)LogPCG._0_1_ < 2) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar5 != 0) && (pUVar4 = Z_Construct_UClass_UPCGData_NoRegister(), pUVar4 != (UClass *)0x0))
  {
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar4->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_149e822b3;
    }
  }
  lVar5 = 0;
LAB_149e822b3:
  local_res8.Value = *(FPCGAttributeAccessorMethods **)(lVar5 + 0x18);
  ::FName::ToString((FName *)&local_res8.Value,&local_38);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// UnregisterDefaultMethods @ 149ec3580

void __thiscall
FPCGAttributeAccessorFactory::UnregisterDefaultMethods(FPCGAttributeAccessorFactory *this)

{
  TObjectPtr<UClass>_u_0 TVar1;
  uint uVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar1.DebugPtr = Z_Construct_UClass_UPCGData_NoRegister();
  local_res8.DebugPtr = TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  if (*(int *)&(this->AccessorMethods).field_0x8 != *(int *)&(this->AccessorMethods).field_0x34) {
    uVar2 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSubclassOf<UPCGData>_>
              ((TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
                *)this,uVar2 >> 0x10 ^ uVar2,(TSubclassOf<UPCGData> *)&local_res8.ObjectPtr);
  }
  return;
}

// UnregisterMethods @ 149ec3600

void __thiscall
FPCGAttributeAccessorFactory::UnregisterMethods
          (FPCGAttributeAccessorFactory *this,TSubclassOf<UPCGData> param_1)

{
  uint uVar1;
  
  if (*(int *)&(this->AccessorMethods).field_0x8 != *(int *)&(this->AccessorMethods).field_0x34) {
    uVar1 = ((uint)(*(ulonglong *)param_1.Class.field0_0x0 >> 0x14) & 0xffff ^
            (uint)(*(ulonglong *)param_1.Class.field0_0x0 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSubclassOf<UPCGData>_>
              ((TSet<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods,0>,FDefaultSetAllocator>
                *)this,uVar1 >> 0x10 ^ uVar1,(TSubclassOf<UPCGData> *)param_1.Class.field0_0x0);
    return;
  }
  return;
}

