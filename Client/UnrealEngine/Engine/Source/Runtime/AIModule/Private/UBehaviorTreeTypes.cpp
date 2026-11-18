// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 14

// StaticClass @ 146ea8fb0

UClass * __cdecl UBehaviorTreeTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeTypes",
               &Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBehaviorTreeTypes>,
               InternalVTableHelperCtorCaller<UBehaviorTreeTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton;
}

// UBehaviorTreeTypes @ 146ecb8c0

UBehaviorTreeTypes * __thiscall
UBehaviorTreeTypes::UBehaviorTreeTypes(UBehaviorTreeTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBehaviorTreeTypes__6B_;
  return this;
}

// UBehaviorTreeTypes @ 146ecb8f0

UBehaviorTreeTypes * __thiscall
UBehaviorTreeTypes::UBehaviorTreeTypes(UBehaviorTreeTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBehaviorTreeTypes__6B_;
  return this;
}

// ~UBehaviorTreeTypes @ 146ecdba0

void __thiscall UBehaviorTreeTypes::~UBehaviorTreeTypes(UBehaviorTreeTypes *this)

{
  *(undefined ***)this = &___7UBehaviorTreeTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DescribeActiveNode @ 146ed96c0

FString * __cdecl
UBehaviorTreeTypes::DescribeActiveNode(FString *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar6 = (ulonglong)(int)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(ActiveDesc,L"Composite");
      ::FString::FString(ActiveDesc + 1,L"ActiveTask");
      ::FString::FString(ActiveDesc + 2,L"AbortingTask");
      ::FString::FString(ActiveDesc + 3,L"InactiveTask");
      atexit(`UBehaviorTreeTypes::DescribeActiveNode'::__l2::
             _dynamic_atexit_destructor_for__ActiveDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (uVar6 < 4) {
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = ActiveDesc[uVar6].Data.ArrayNum;
    _Src = ActiveDesc[uVar6].Data.AllocatorInstance.Data;
    local_30 = iVar1;
    if (iVar1 == 0) {
      pFVar4 = &local_38;
      iStack_2c = 0;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_38,iVar1,&iStack_2c);
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      pFVar4 = &local_38;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = local_38.Data;
    }
  }
  else {
    local_20 = 0;
    pFVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  pFVar4->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar4[1].Data;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar2) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((bVar3) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// DescribeFlowAbortMode @ 146ed9b00

FString * __cdecl
UBehaviorTreeTypes::DescribeFlowAbortMode(FString *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar6 = (ulonglong)(int)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(AbortModeDesc,L"None");
      ::FString::FString(AbortModeDesc + 1,L"Lower Priority");
      ::FString::FString(AbortModeDesc + 2,L"Self");
      ::FString::FString(AbortModeDesc + 3,L"Both");
      atexit(`UBehaviorTreeTypes::DescribeFlowAbortMode'::__l2::
             _dynamic_atexit_destructor_for__AbortModeDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (uVar6 < 4) {
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = AbortModeDesc[uVar6].Data.ArrayNum;
    _Src = AbortModeDesc[uVar6].Data.AllocatorInstance.Data;
    local_30 = iVar1;
    if (iVar1 == 0) {
      pFVar4 = &local_38;
      iStack_2c = 0;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_38,iVar1,&iStack_2c);
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      pFVar4 = &local_38;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = local_38.Data;
    }
  }
  else {
    local_20 = 0;
    pFVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  pFVar4->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar4[1].Data;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar2) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((bVar3) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// DescribeNodeHelper @ 146eda2d0

FString * __cdecl
UBehaviorTreeTypes::DescribeNodeHelper(FString *__return_storage_ptr__,UBTNode *param_1)

{
  int iVar1;
  UBehaviorTree *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FVar7.Data = (FScriptContainerElement *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1 == (UBTNode *)0x0) {
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = &local_48;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    UBTNode::GetNodeName(param_1,&local_28);
    pUVar2 = (param_1->TreeAsset).field0_0x0.DebugPtr;
    if (pUVar2 == (UBehaviorTree *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    ::FString::PrintfImpl(&local_38,L"%s::%s[%d]");
    pFVar8 = &local_38;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
  iVar1 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeNodeResult @ 146eda460

FString * __cdecl
UBehaviorTreeTypes::DescribeNodeResult(FString *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar6 = (ulonglong)(int)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(ResultDesc,L"Succeeded");
      ::FString::FString(ResultDesc + 1,L"Failed");
      ::FString::FString(ResultDesc + 2,L"Aborted");
      ::FString::FString(ResultDesc + 3,L"InProgress");
      atexit(`UBehaviorTreeTypes::DescribeNodeResult'::__l2::
             _dynamic_atexit_destructor_for__ResultDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (uVar6 < 4) {
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = ResultDesc[uVar6].Data.ArrayNum;
    _Src = ResultDesc[uVar6].Data.AllocatorInstance.Data;
    local_30 = iVar1;
    if (iVar1 == 0) {
      pFVar4 = &local_38;
      iStack_2c = 0;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_38,iVar1,&iStack_2c);
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      pFVar4 = &local_38;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = local_38.Data;
    }
  }
  else {
    local_20 = 0;
    pFVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  pFVar4->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar4[1].Data;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar2) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((bVar3) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// DescribeNodeUpdateMode @ 146eda640

FString * __cdecl
UBehaviorTreeTypes::DescribeNodeUpdateMode(FString *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar6 = (ulonglong)(int)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(UpdateModeDesc,L"Unknown");
      ::FString::FString(UpdateModeDesc + 1,L"Add");
      ::FString::FString(UpdateModeDesc + 2,L"Remove");
      atexit(`UBehaviorTreeTypes::DescribeNodeUpdateMode'::__l2::
             _dynamic_atexit_destructor_for__UpdateModeDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (uVar6 < 3) {
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = UpdateModeDesc[uVar6].Data.ArrayNum;
    _Src = UpdateModeDesc[uVar6].Data.AllocatorInstance.Data;
    local_30 = iVar1;
    if (iVar1 == 0) {
      pFVar4 = &local_38;
      iStack_2c = 0;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_38,iVar1,&iStack_2c);
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      pFVar4 = &local_38;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = local_38.Data;
    }
  }
  else {
    local_20 = 0;
    pFVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  pFVar4->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar4[1].Data;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar2) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((bVar3) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// DescribeTaskStatus @ 146eddc00

FString * __cdecl
UBehaviorTreeTypes::DescribeTaskStatus(FString *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar6 = (ulonglong)(int)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(TaskStatusDesc,L"Active");
      ::FString::FString(TaskStatusDesc + 1,L"Aborting");
      ::FString::FString(TaskStatusDesc + 2,L"Inactive");
      atexit(`UBehaviorTreeTypes::DescribeTaskStatus'::__l2::
             _dynamic_atexit_destructor_for__TaskStatusDesc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (uVar6 < 3) {
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = TaskStatusDesc[uVar6].Data.ArrayNum;
    _Src = TaskStatusDesc[uVar6].Data.AllocatorInstance.Data;
    local_30 = iVar1;
    if (iVar1 == 0) {
      pFVar4 = &local_38;
      iStack_2c = 0;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_38,iVar1,&iStack_2c);
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
      pFVar4 = &local_38;
      bVar3 = true;
      bVar2 = false;
      FVar5.Data = local_38.Data;
    }
  }
  else {
    local_20 = 0;
    pFVar4 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  pFVar4->Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pFVar4[1].Data;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  pFVar4[1].Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar2) {
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  if ((bVar3) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ee9a20

UClass * __cdecl UBehaviorTreeTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeTypes",
               &Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBehaviorTreeTypes>,
               InternalVTableHelperCtorCaller<UBehaviorTreeTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeTypes.InnerSingleton;
}

// GetShortTypeName @ 146eeada0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
UBehaviorTreeTypes::GetShortTypeName(FString *__return_storage_ptr__,UObject *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UObject *)0x0) && (lVar1 = *(longlong *)&param_1->field_0x10, lVar1 != 0)) {
    local_res10[0] = *(FName *)(lVar1 + 0x18);
    if ((*(uint *)(lVar1 + 0xd4) & 0x40000) != 0) {
      ::FName::ToString(local_res10,&local_28);
      iVar2 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      if (iVar2 + -2 < iVar2) {
        iVar2 = iVar2 + -2;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      ::FString::RemoveAt(&local_28,iVar3,2,No);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    ::FName::ToString(local_res10,&local_18);
    iVar2 = ::FString::Find(&local_18,L"_",1,CaseSensitive,FromStart,-1);
    if (iVar2 != -1) {
      ::FString::RemoveAt(&local_18,0,iVar2 + 1,No);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// SetBTLoggingContext @ 146efe9a0

void __cdecl UBehaviorTreeTypes::SetBTLoggingContext(UBTNode *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = DescribeNodeHelper(&local_18,param_1);
  if (pFVar1 != &BTLoggingContext) {
    if (BTLoggingContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(BTLoggingContext.Data.AllocatorInstance.Data);
    }
    BTLoggingContext.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    BTLoggingContext.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    BTLoggingContext.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUBehaviorTreeTypes @ 146f00f40

void __cdecl UBehaviorTreeTypes::StaticRegisterNativesUBehaviorTreeTypes(void)

{
  return;
}

