// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f38d0

UScriptStruct * __cdecl FRigUnit_SetMultiControlVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlVector2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D,
                         (UObject *)pUVar1,L"RigUnit_SetMultiControlVector2D");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlVector2D.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlVector2D.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f3950

UScriptStruct * __thiscall
FRigUnit_SetMultiControlVector2D::GetExecuteContextStruct(FRigUnit_SetMultiControlVector2D *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4f3f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetMultiControlVector2D::Execute(FRigUnit_SetMultiControlVector2D *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigUnit_SetMultiControlVector2D_Entry_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_278.DataPtr =
       (FRigUnit_SetMultiControlVector2D_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->Weight,
                &this->CachedControlIndices);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_SetMultiControlVector2D @ 14a515b90

FRigUnit_SetMultiControlVector2D * __thiscall
FRigUnit_SetMultiControlVector2D::FRigUnit_SetMultiControlVector2D
          (FRigUnit_SetMultiControlVector2D *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TVector2<double> TVar4;
  int iVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  piVar1 = &(this->Entries).ArrayMax;
  this->Weight = 1.0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_SetMultiControlVector2D__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->CachedControlIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedControlIndices).ArrayNum = 0;
  (this->CachedControlIndices).ArrayMax = 0;
  *piVar1 = 0;
  TVar4 = UE::Math::TVector2<double>::ZeroVector;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&(this->Entries).AllocatorInstance,piVar1);
  uStack_20 = TVar4.field0_0x0._0_8_;
  uStack_18 = TVar4.field0_0x0._8_8_;
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar5 * 0x18;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = uStack_20;
  *(undefined8 *)(pFVar3 + (longlong)iVar5 * 0x18 + 0x10) = uStack_18;
  return this;
}

// Execute @ 14a52cff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetMultiControlVector2D::Execute
          (FRigUnit_SetMultiControlVector2D *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_SetMultiControlVector2D_Entry_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_SetMultiControlVector2D_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,this->Weight,&this->CachedControlIndices);
  return;
}

// RigVMExecute @ 14a5537a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlVector2D::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  float *pfVar7;
  FRigVMSlice *pFVar8;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar9;
  FControlRigExecuteContext *pFVar10;
  TArrayView<FRigUnit_SetMultiControlVector2D_Entry_const_,int> local_28 [2];
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar3->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar9 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar8->Offset + pFVar8->Index);
  local_28[0].DataPtr = *(FRigUnit_SetMultiControlVector2D_Entry **)puVar6;
  local_28[0].ArrayNum = *(int *)(puVar6 + 8);
  if (local_28[0].ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,local_28,fVar1,pTVar9);
  return;
}

// StaticExecute @ 14a5934e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlVector2D::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_SetMultiControlVector2D_Entry_const_,int> *param_2,float param_3,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TVector2<double>_u_0 local_48 [2];
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum(param_4,param_2->ArrayNum,Default)
    ;
    iVar8 = param_2->ArrayNum;
    uVar7 = 0;
    if (0 < iVar8) {
      lVar9 = 0;
      do {
        uVar6 = ~uVar7 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar7 < iVar8) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pdVar1 = (double *)((longlong)&(param_2->DataPtr->Vector).field0_0x0 + lVar9);
        local_48[0]._0_8_ = *pdVar1;
        local_48[0]._8_8_ = pdVar1[1];
        uVar5 = 0;
        if ((int)uVar7 < param_4->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_4->AllocatorInstance).Data;
        uVar5 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FRigUnit_SetControlVector2D::StaticExecute
                  (param_1,&param_2->DataPtr[(int)uVar7].Control,param_3,
                   (TVector2<double> *)&local_48[0]._s_0,
                   (FCachedRigElement *)(pFVar2 + (longlong)(int)uVar7 * 0x20));
        iVar8 = param_2->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((int)uVar7 < iVar8);
    }
  }
  return;
}

