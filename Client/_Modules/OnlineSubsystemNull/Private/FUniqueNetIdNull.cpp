// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 4

// Create<FString_&> @ 14ed0b8e0

TSharedRef<FUniqueNetIdNull_const_,1> * __cdecl
FUniqueNetIdNull::Create<FString_&>
          (TSharedRef<FUniqueNetIdNull_const_,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  bool bVar5;
  FUniqueNetIdNull *pFVar6;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar7;
  TRawPtrProxy<FUniqueNetIdNull> local_res8;
  
  pFVar6 = ::operator_new(0x30);
  FVar2 = NULL_SUBSYSTEM;
  if (pFVar6 == (FUniqueNetIdNull *)0x0) {
    pFVar6 = (FUniqueNetIdNull *)0x0;
  }
  else {
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdString__6B_;
    ::FString::FString((FString *)&pFVar6->field_0x18,param_1);
    FVar4 = NULL_SUBSYSTEM;
    NULL_SUBSYSTEM.ComparisonIndex = FVar2.ComparisonIndex.Value;
    NULL_SUBSYSTEM.Number = FVar2.Number;
    uVar3 = NULL_SUBSYSTEM.Number;
    *(uint *)&pFVar6->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    NULL_SUBSYSTEM = FVar4;
    *(uint *)&pFVar6->field_0x2c = uVar3;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdNull__6B_;
    if (((*(longlong *)&pFVar6->field_0x8 != 0) && (*(longlong *)&pFVar6->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar6->field_0x10 + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<FUniqueNetIdNull_const_,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
  }
  local_res8.Object = pFVar6;
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create<FString_const_&> @ 14ed0b9c0

TSharedRef<FUniqueNetIdNull_const_,1> * __cdecl
FUniqueNetIdNull::Create<FString_const_&>
          (TSharedRef<FUniqueNetIdNull_const_,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  bool bVar5;
  FUniqueNetIdNull *pFVar6;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar7;
  TRawPtrProxy<FUniqueNetIdNull> local_res8;
  
  pFVar6 = ::operator_new(0x30);
  FVar2 = NULL_SUBSYSTEM;
  if (pFVar6 == (FUniqueNetIdNull *)0x0) {
    pFVar6 = (FUniqueNetIdNull *)0x0;
  }
  else {
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdString__6B_;
    ::FString::FString((FString *)&pFVar6->field_0x18,param_1);
    FVar4 = NULL_SUBSYSTEM;
    NULL_SUBSYSTEM.ComparisonIndex = FVar2.ComparisonIndex.Value;
    NULL_SUBSYSTEM.Number = FVar2.Number;
    uVar3 = NULL_SUBSYSTEM.Number;
    *(uint *)&pFVar6->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    NULL_SUBSYSTEM = FVar4;
    *(uint *)&pFVar6->field_0x2c = uVar3;
    *(undefined ***)pFVar6 = &___7FUniqueNetIdNull__6B_;
    if (((*(longlong *)&pFVar6->field_0x8 != 0) && (*(longlong *)&pFVar6->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar6->field_0x10 + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<FUniqueNetIdNull_const_,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
  }
  local_res8.Object = pFVar6;
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create<FString> @ 14ed0baa0

TSharedRef<FUniqueNetIdNull_const_,1> * __cdecl
FUniqueNetIdNull::Create<FString>
          (TSharedRef<FUniqueNetIdNull_const_,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  bool bVar5;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar6;
  TRawPtrProxy<FUniqueNetIdNull> local_res8;
  
  local_res8.Object = ::operator_new(0x30);
  FVar2 = NULL_SUBSYSTEM;
  if (local_res8.Object == (FUniqueNetIdNull *)0x0) {
    local_res8.Object = (FUniqueNetIdNull *)0x0;
  }
  else {
    *(undefined8 *)&(local_res8.Object)->field_0x8 = 0;
    *(undefined8 *)&(local_res8.Object)->field_0x10 = 0;
    *(undefined ***)local_res8.Object = &___7FUniqueNetIdString__6B_;
    *(undefined8 *)&(local_res8.Object)->field_0x18 = 0;
    *(FScriptContainerElement **)&(local_res8.Object)->field_0x18 =
         (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(local_res8.Object)->field_0x20 = (param_1->Data).ArrayNum;
    *(int *)&(local_res8.Object)->field_0x24 = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(undefined ***)local_res8.Object = &___7FUniqueNetIdNull__6B_;
    FVar4 = NULL_SUBSYSTEM;
    NULL_SUBSYSTEM.ComparisonIndex = FVar2.ComparisonIndex.Value;
    NULL_SUBSYSTEM.Number = FVar2.Number;
    uVar3 = NULL_SUBSYSTEM.Number;
    *(uint *)&(local_res8.Object)->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    NULL_SUBSYSTEM = FVar4;
    *(uint *)&(local_res8.Object)->field_0x2c = uVar3;
    if (((*(longlong *)&(local_res8.Object)->field_0x8 != 0) &&
        (*(longlong *)&(local_res8.Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res8.Object)->field_0x10 + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<FUniqueNetIdNull_const_,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// EmptyId @ 14ed22490

TSharedRef<FUniqueNetIdNull_const_,1> * __cdecl FUniqueNetIdNull::EmptyId(void)

{
  uint uVar1;
  FUniqueNetIdNull *pFVar2;
  TRawPtrProxy<FUniqueNetIdNull> local_res8 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pFVar2 = ::operator_new(0x30);
    local_res8[0].Object = (FUniqueNetIdNull *)0x0;
    if (pFVar2 != (FUniqueNetIdNull *)0x0) {
      *(undefined8 *)&pFVar2->field_0x8 = 0;
      *(undefined8 *)&pFVar2->field_0x10 = 0;
      *(undefined8 *)&pFVar2->field_0x18 = 0;
      *(undefined8 *)&pFVar2->field_0x20 = 0;
      *(undefined ***)pFVar2 = &___7FUniqueNetIdNull__6B_;
      uVar1 = NULL_SUBSYSTEM.Number;
      *(uint *)&pFVar2->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
      *(uint *)&pFVar2->field_0x2c = uVar1;
      local_res8[0].Object = pFVar2;
    }
    TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
              ((TSharedRef<FUniqueNetIdNull_const_,1> *)
               &`public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
                ::__l2::EmptyId,local_res8);
    atexit(`FUniqueNetIdNull::EmptyId'::__l2::_dynamic_atexit_destructor_for__EmptyId__);
    _Init_thread_footer(&`public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    return (TSharedRef<FUniqueNetIdNull_const_,1> *)
           &`public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
            ::__l2::EmptyId;
  }
  return (TSharedRef<FUniqueNetIdNull_const_,1> *)
         &`public:_static_class_TSharedRef<FUniqueNetIdNull_const_,1>_const&___ptr64___cdecl_FUniqueNetIdNull::EmptyId(void)'
          ::__l2::EmptyId;
}

