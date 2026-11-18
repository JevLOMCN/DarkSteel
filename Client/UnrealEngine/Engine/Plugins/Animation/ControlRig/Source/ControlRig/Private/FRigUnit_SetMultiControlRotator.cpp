// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a476290

UScriptStruct * __cdecl FRigUnit_SetMultiControlRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlRotator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator,(UObject *)pUVar1
                         ,L"RigUnit_SetMultiControlRotator");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlRotator.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlRotator.OuterSingleton;
}

// GetExecuteContextStruct @ 14a476480

UScriptStruct * __thiscall
FRigUnit_SetMultiControlRotator::GetExecuteContextStruct(FRigUnit_SetMultiControlRotator *this)

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

// Execute @ 14a476be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetMultiControlRotator::Execute(FRigUnit_SetMultiControlRotator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigUnit_SetMultiControlRotator_Entry_const_,int> local_278;
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
       (FRigUnit_SetMultiControlRotator_Entry *)(this->Entries).AllocatorInstance.Data;
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

// FRigUnit_SetMultiControlRotator @ 14a515ad0

FRigUnit_SetMultiControlRotator * __thiscall
FRigUnit_SetMultiControlRotator::FRigUnit_SetMultiControlRotator
          (FRigUnit_SetMultiControlRotator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined7 uStack_17;
  
  this->Weight = 1.0;
  piVar1 = &(this->Entries).ArrayMax;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_SetMultiControlRotator__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->CachedControlIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedControlIndices).ArrayNum = 0;
  (this->CachedControlIndices).ArrayMax = 0;
  *piVar1 = 0;
  dVar6 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar5 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&(this->Entries).AllocatorInstance,piVar1);
  uStack_28 = SUB84(dVar5,0);
  uStack_24 = (undefined4)((ulonglong)dVar5 >> 0x20);
  lVar8 = (longlong)iVar7;
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x28) = 0;
  *(double *)(pFVar3 + lVar8 * 0x28 + 8) = dVar4;
  pFVar2 = pFVar3 + lVar8 * 0x28 + 0x10;
  *(undefined4 *)pFVar2 = uStack_28;
  *(undefined4 *)(pFVar2 + 4) = uStack_24;
  *(int *)(pFVar2 + 8) = SUB84(dVar6,0);
  *(int *)(pFVar2 + 0xc) = (int)((ulonglong)dVar6 >> 0x20);
  *(ulonglong *)(pFVar3 + lVar8 * 0x28 + 0x20) = CONCAT71(uStack_17,1);
  return this;
}

// Execute @ 14a52cf70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetMultiControlRotator::Execute
          (FRigUnit_SetMultiControlRotator *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_SetMultiControlRotator_Entry_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_SetMultiControlRotator_Entry *)(this->Entries).AllocatorInstance.Data
  ;
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

// RigVMExecute @ 14a5535d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlRotator::RigVMExecute
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
  TArrayView<FRigUnit_SetMultiControlRotator_Entry_const_,int> local_28 [2];
  
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
  local_28[0].DataPtr = *(FRigUnit_SetMultiControlRotator_Entry **)puVar6;
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

// StaticExecute @ 14a5932b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlRotator::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_SetMultiControlRotator_Entry_const_,int> *param_2,float param_3,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  ERigVMTransformSpace EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  TRotator<double> local_58 [2];
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum(param_4,param_2->ArrayNum,Default)
    ;
    iVar7 = param_2->ArrayNum;
    uVar10 = 0;
    if (0 < iVar7) {
      lVar9 = 0;
      do {
        uVar8 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pdVar1 = (double *)((longlong)&(param_2->DataPtr->Rotator).Pitch + lVar9);
        local_58[0].Pitch = *pdVar1;
        local_58[0].Yaw = pdVar1[1];
        local_58[0].Roll = *(double *)((longlong)&(param_2->DataPtr->Rotator).Roll + lVar9);
        uVar6 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_4->AllocatorInstance).Data;
        uVar6 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar2 = (&param_2->DataPtr->Space)[lVar9];
        uVar6 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FRigUnit_SetControlRotator::StaticExecute
                  (param_1,&param_2->DataPtr[(int)uVar10].Control,param_3,local_58,EVar2,
                   (FCachedRigElement *)(pFVar3 + (longlong)(int)uVar10 * 0x20));
        iVar7 = param_2->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while ((int)uVar10 < iVar7);
    }
  }
  return;
}

