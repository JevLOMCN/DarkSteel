// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 34

// StaticClass @ 14a0acc40

UClass * __cdecl URigVMNativized::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMNativized.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMNativized",
               &Z_Registration_Info_UClass_URigVMNativized.InnerSingleton,
               StaticRegisterNativesURigVMNativized,0x3d8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMNativized>,
               InternalVTableHelperCtorCaller<URigVMNativized>,local_res8,URigVM::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMNativized.InnerSingleton;
}

// URigVMNativized @ 14a0c2170

URigVMNativized * __thiscall
URigVMNativized::URigVMNativized(URigVMNativized *this,FVTableHelper *param_1)

{
  URigVM::URigVM((URigVM *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMNativized__6B_;
  (this->LazyMemoryBranches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyMemoryBranches).ArrayNum = 0;
  (this->LazyMemoryBranches).ArrayMax = 0;
  (this->LazyMemoryHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyMemoryHandles).ArrayNum = 0;
  (this->LazyMemoryHandles).ArrayMax = 0;
  return this;
}

// URigVMNativized @ 14a0c21c0

URigVMNativized * __thiscall URigVMNativized::URigVMNativized(URigVMNativized *this)

{
  URigVM::URigVM((URigVM *)this);
  this->TemporaryArrayIndex = -1;
  this->_padding_ = (longlong)&___7URigVMNativized__6B_;
  (this->LazyMemoryBranches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyMemoryBranches).ArrayNum = 0;
  (this->LazyMemoryBranches).ArrayMax = 0;
  (this->LazyMemoryHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyMemoryHandles).ArrayNum = 0;
  (this->LazyMemoryHandles).ArrayMax = 0;
  return this;
}

// ~URigVMNativized @ 14a0c34b0

void __thiscall URigVMNativized::~URigVMNativized(URigVMNativized *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMNativized__6B_;
  pFVar1 = (this->LazyMemoryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMLazyBranch,int>
            ((FRigVMLazyBranch *)(this->LazyMemoryBranches).AllocatorInstance.Data,
             (this->LazyMemoryBranches).ArrayNum);
  pFVar1 = (this->LazyMemoryBranches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URigVM::~URigVM((URigVM *)this);
  return;
}

// AddRigVMFunction @ 14a0ccf30

int __thiscall
URigVMNativized::AddRigVMFunction(URigVMNativized *this,UScriptStruct *param_1,FName *param_2)

{
  return -1;
}

// AllocateLazyMemoryHandles @ 14a0cdf40

void __thiscall URigVMNativized::AllocateLazyMemoryHandles(URigVMNativized *this,int param_1)

{
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  piVar6 = &(this->LazyMemoryHandles).ArrayNum;
  iVar5 = *piVar6;
  if (iVar5 != param_1) {
    pTVar1 = &this->LazyMemoryHandles;
    if (iVar5 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar6,
                         &(this->LazyMemoryHandles).ArrayMax);
      DefaultConstructItems<FRigVMMemoryHandle,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
    }
    else {
      if (param_1 < 0) goto LAB_14a0ce151;
      if (param_1 < iVar5) {
        uVar7 = iVar5 - param_1;
        if (((int)(uVar7 | param_1) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar7 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x20;
          iVar5 = ((this->LazyMemoryHandles).ArrayNum - uVar7) - param_1;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0x20,(longlong)iVar5 << 5);
          }
          piVar6 = &(this->LazyMemoryHandles).ArrayNum;
          *piVar6 = *piVar6 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&pTVar1->AllocatorInstance,(this->LazyMemoryHandles).ArrayNum,
                     &(this->LazyMemoryHandles).ArrayMax);
        }
      }
    }
    this_00 = &this->LazyMemoryBranches;
    iVar5 = (this->LazyMemoryBranches).ArrayNum;
    piVar6 = &(this->LazyMemoryBranches).ArrayNum;
    if (iVar5 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,0x10,param_1 - iVar5,&this_00->AllocatorInstance,piVar6,
                         &(this->LazyMemoryBranches).ArrayMax);
      DefaultConstructItems<FRigVMLazyBranch,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x60,param_1 - iVar5);
    }
    else {
      if (param_1 < 0) {
LAB_14a0ce151:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 < iVar5) {
        uVar7 = iVar5 - param_1;
        if (((int)(uVar7 | param_1) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar7 != 0) {
          TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,param_1,uVar7);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&this_00->AllocatorInstance,*piVar6,
                     &(this->LazyMemoryBranches).ArrayMax);
        }
      }
    }
  }
  return;
}

// ClearMemory @ 14a0cf560

void __thiscall URigVMNativized::ClearMemory(URigVMNativized *this)

{
  return;
}

// ContainsEntry @ 14a0d1220

bool __thiscall URigVMNativized::ContainsEntry(URigVMNativized *this,FName *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  FName *pFVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x3c8))();
  pFVar3 = (FName *)*plVar2;
  pFVar1 = pFVar3 + (int)plVar2[1];
  if (pFVar3 != pFVar1) {
    do {
      if (*pFVar3 == *param_1) {
        return true;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1);
  }
  return false;
}

// CopyFrom @ 14a0d1a70

void __thiscall
URigVMNativized::CopyFrom
          (URigVMNativized *this,URigVM *param_1,bool param_2,bool param_3,bool param_4,bool param_5
          ,bool param_6)

{
  return;
}

// Empty @ 14a0d6980

void __thiscall URigVMNativized::Empty(URigVMNativized *this,FRigVMExtendedExecuteContext *param_1)

{
  return;
}

// Empty @ 14a0d6990

void __thiscall URigVMNativized::Empty(URigVMNativized *this)

{
  return;
}

// Execute @ 14a0d7240

ERigVMExecuteResult __thiscall
URigVMNativized::Execute
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1,
          TArrayView<URigVMMemoryStorage_*,int> *param_2,FName *param_3)

{
  return Failed;
}

// Execute @ 14a0d7250

ERigVMExecuteResult __thiscall
URigVMNativized::Execute
          (URigVMNativized *this,TArrayView<URigVMMemoryStorage_*,int> *param_1,FName *param_2)

{
  return Failed;
}

// ExecuteVM @ 14a0d76b0

ERigVMExecuteResult __thiscall
URigVMNativized::ExecuteVM
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1,FName *param_2)

{
  return Failed;
}

// FindEntry @ 14a0d8a90

int __thiscall URigVMNativized::FindEntry(URigVMNativized *this,FName *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  FName *pFVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x3c8))();
  pFVar1 = (FName *)*plVar2;
  if (pFVar1 != pFVar1 + (int)plVar2[1]) {
    pFVar3 = pFVar1;
    do {
      if (*pFVar3 == *param_1) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1 + (int)plVar2[1]);
  }
  return -1;
}

// GetEntryNames @ 14a0e42e0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
URigVMNativized::GetEntryNames(URigVMNativized *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_URigVMNativized::GetEntryNames(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_URigVMNativized::GetEntryNames(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_URigVMNativized::GetEntryNames(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`URigVMNativized::GetEntryNames'::__l2::_dynamic_atexit_destructor_for__EmptyEntries__)
      ;
      _Init_thread_footer(&`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_URigVMNativized::GetEntryNames(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_URigVMNativized::GetEntryNames(void)const___ptr64'
          ::__l2::EmptyEntries;
}

// GetInstructions @ 14a0e7490

FRigVMInstructionArray * __thiscall URigVMNativized::GetInstructions(URigVMNativized *this)

{
  FRigVMInstructionArray *pFVar1;
  
  if (0 < *(int *)(this->_padding_ + 0x10)) {
    pFVar1 = URigVM::GetInstructions((URigVM *)this);
    return pFVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FRigVMInstructionArray::FRigVMInstructionArray(&EmptyInstructions);
      atexit(`URigVMNativized::GetInstructions'::__l2::
             _dynamic_atexit_destructor_for__EmptyInstructions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyInstructions;
}

// GetLazyMemoryHandle @ 14a0e7520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMMemoryHandle * __thiscall
URigVMNativized::GetLazyMemoryHandle
          (URigVMNativized *this,int param_1,uchar *param_2,FProperty *param_3,
          TFunction<ERigVMExecuteResult___cdecl(void)> *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FRigVMMemoryHandle *pFVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  FRigVMLazyBranch *pFVar16;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar15 = (longlong)param_1;
  if (param_1 == -1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMNativized.cpp"
                       ,0x40,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRigVMMemoryHandle *)(*pcVar2)();
      return pFVar11;
    }
  }
  else if ((-1 < param_1) && (param_1 < (this->LazyMemoryHandles).ArrayNum)) goto LAB_14a0e75b6;
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("LazyMemoryHandles.IsValidIndex(InIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMNativized.cpp"
                     ,0x41,L"");
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FRigVMMemoryHandle *)(*pcVar2)();
    return pFVar11;
  }
LAB_14a0e75b6:
  iVar1 = (this->LazyMemoryHandles).ArrayNum;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_88 = lVar15;
    local_80 = (longlong)iVar1;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRigVMMemoryHandle *)(*pcVar2)();
      return pFVar11;
    }
  }
  pFVar11 = (FRigVMMemoryHandle *)((this->LazyMemoryHandles).AllocatorInstance.Data + lVar15 * 0x20)
  ;
  if (pFVar11->LazyBranch == (FRigVMLazyBranch *)0x0) {
    if ((param_1 < 0) || ((this->LazyMemoryBranches).ArrayNum <= param_1)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LazyMemoryBranches.IsValidIndex(InIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMNativized.cpp"
                         ,0x46,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRigVMMemoryHandle *)(*pcVar2)();
        return pFVar11;
      }
    }
    iVar1 = (this->LazyMemoryBranches).ArrayNum;
    uVar10 = 0;
    if (param_1 < iVar1) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_88 = lVar15;
      local_80 = (longlong)iVar1;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRigVMMemoryHandle *)(*pcVar2)();
        return pFVar11;
      }
    }
    pFVar16 = (FRigVMLazyBranch *)
              ((this->LazyMemoryBranches).AllocatorInstance.Data + lVar15 * 0x60);
    pFVar16->VM = (URigVM *)this;
    local_78 = *(longlong *)param_4;
    uStack_50 = (longlong *)0x0;
    if (local_78 != 0) {
      puVar12 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar12 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar12)(puVar12,&local_68);
    }
    lVar15 = *(longlong *)&pFVar16->FunctionPtr;
    uVar8 = *(undefined8 *)&(pFVar16->FunctionPtr).field_0x8;
    uVar3 = *(undefined4 *)&(pFVar16->FunctionPtr).field_0x10;
    uVar4 = *(undefined4 *)&(pFVar16->FunctionPtr).field_0x14;
    uVar5 = *(undefined4 *)&(pFVar16->FunctionPtr).field_0x18;
    uVar6 = *(undefined4 *)&(pFVar16->FunctionPtr).field_0x1c;
    uVar7 = *(undefined8 *)&(pFVar16->FunctionPtr).field_0x20;
    plVar14 = *(longlong **)&(pFVar16->FunctionPtr).field_0x28;
    *(longlong *)&pFVar16->FunctionPtr = local_78;
    *(undefined8 *)&(pFVar16->FunctionPtr).field_0x8 = uStack_70;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x10 = (undefined4)local_68;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x14 = local_68._4_4_;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x18 = uStack_60;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x1c = uStack_5c;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x28 = (undefined4)uStack_50;
    *(undefined4 *)&(pFVar16->FunctionPtr).field_0x2c = uStack_50._4_4_;
    local_68._0_4_ = uVar3;
    local_68._4_4_ = uVar4;
    uStack_60 = uVar5;
    uStack_5c = uVar6;
    local_58 = uVar7;
    uStack_50 = plVar14;
    local_78 = lVar15;
    uStack_70 = uVar8;
    if (lVar15 != 0) {
      plVar13 = &local_68;
      if (plVar14 != (longlong *)0x0) {
        plVar13 = plVar14;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    pFVar11->Ptr = param_2;
    pFVar11->Property = param_3;
    pFVar11->PropertyPath = (FRigVMPropertyPath *)0x0;
    pFVar11->LazyBranch = pFVar16;
  }
  if (*(longlong *)param_4 != 0) {
    plVar14 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return pFVar11;
}

// GetMemoryByType @ 14a0e79a0

FRigVMMemoryStorageStruct * __thiscall
URigVMNativized::GetMemoryByType
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1,ERigVMMemoryType param_2)

{
  return (FRigVMMemoryStorageStruct *)0x0;
}

// GetMemoryByType @ 14a0e79b0

URigVMMemoryStorage * __thiscall
URigVMNativized::GetMemoryByType(URigVMNativized *this,ERigVMMemoryType param_1,bool param_2)

{
  return (URigVMMemoryStorage *)0x0;
}

// GetPrivateStaticClass @ 14a0eacf0

UClass * __cdecl URigVMNativized::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMNativized.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMNativized",
               &Z_Registration_Info_UClass_URigVMNativized.InnerSingleton,
               StaticRegisterNativesURigVMNativized,0x3d8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMNativized>,
               InternalVTableHelperCtorCaller<URigVMNativized>,local_res8,URigVM::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMNativized.InnerSingleton;
}

// GetRigVMFunctionName @ 14a0eb640

FString * __thiscall
URigVMNativized::GetRigVMFunctionName
          (URigVMNativized *this,FString *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Initialize @ 14a0f4bb0

bool __thiscall
URigVMNativized::Initialize(URigVMNativized *this,FRigVMExtendedExecuteContext *param_1)

{
  return true;
}

// Initialize @ 14a0f4bc0

bool __thiscall
URigVMNativized::Initialize
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1,
          TArrayView<URigVMMemoryStorage_*,int> *param_2)

{
  return false;
}

// Initialize @ 14a0f4bd0

bool __thiscall
URigVMNativized::Initialize(URigVMNativized *this,TArrayView<URigVMMemoryStorage_*,int> *param_1)

{
  return false;
}

// IsNativized @ 14a0f9a70

bool __thiscall URigVMNativized::IsNativized(URigVMNativized *this)

{
  return true;
}

// PostLoad @ 14a1015c0

void __thiscall URigVMNativized::PostLoad(URigVMNativized *this)

{
  return;
}

// Reset @ 14a10b0d0

void __thiscall URigVMNativized::Reset(URigVMNativized *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMLazyBranch *pFVar3;
  
  (this->LazyMemoryHandles).ArrayNum = 0;
  if ((this->LazyMemoryHandles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->LazyMemoryHandles).AllocatorInstance,0,
               &(this->LazyMemoryHandles).ArrayMax);
  }
  piVar1 = &(this->LazyMemoryBranches).ArrayMax;
  pFVar3 = (FRigVMLazyBranch *)(this->LazyMemoryBranches).AllocatorInstance.Data;
  iVar2 = (this->LazyMemoryBranches).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMLazyBranch,int>(pFVar3,iVar2);
    (this->LazyMemoryBranches).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->LazyMemoryBranches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMLazyBranch,int>(pFVar3,iVar2);
    (this->LazyMemoryBranches).ArrayNum = 0;
  }
  FRigVMByteCode::Reset((FRigVMByteCode *)&this->_padding_);
  return;
}

// Serialize @ 14a10eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URigVMNativized::Serialize(URigVMNativized *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14a10edb0

void __thiscall URigVMNativized::Serialize(URigVMNativized *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetInstructionIndex @ 14a1112c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URigVMNativized::SetInstructionIndex
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1,ushort param_2)

{
  FRigVMExecuteContext *pFVar1;
  
  pFVar1 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pFVar1->InstructionIndex = (uint)param_2;
  return;
}

// SetInstructionIndex @ 14a1112f0

void __thiscall URigVMNativized::SetInstructionIndex(URigVMNativized *this,ushort param_1)

{
  return;
}

// StaticRegisterNativesURigVMNativized @ 14a1119c0

void __cdecl URigVMNativized::StaticRegisterNativesURigVMNativized(void)

{
  return;
}

// UpdateExternalVariables @ 14a1151e0

void __thiscall
URigVMNativized::UpdateExternalVariables
          (URigVMNativized *this,FRigVMExtendedExecuteContext *param_1)

{
  return;
}

