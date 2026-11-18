// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4d9fa0

UScriptStruct * __cdecl FRigUnit_SetControlVisibility::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVisibility.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVisibility.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility,(UObject *)pUVar1,
                         L"RigUnit_SetControlVisibility");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVisibility.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVisibility.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4da020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlVisibility::GetExecuteContextStruct(FRigUnit_SetControlVisibility *this)

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

// Execute @ 14a4da380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlVisibility::Execute(FRigUnit_SetControlVisibility *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Pattern,this->bVisible,
                &this->CachedControlIndices);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// operator() @ 14a51cb00

bool __thiscall
`FRigUnit_SetControlVisibility::StaticExecute'::__l15::<lambda_1>::operator()
          (void *this,FRigControlElement *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FString *this_00;
  size_t sVar9;
  wchar_t *_Str;
  FString local_18;
  
  this_00 = ::FName::ToString((FName *)&param_1->field_0x14,&local_18);
  if (*(int *)((longlong)this + 0x10) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)((longlong)this + 8);
    if (_Str == (wchar_t *)0x0) {
      iVar8 = -1;
      goto LAB_14a51cb78;
    }
  }
  sVar9 = wcslen(_Str);
  iVar8 = ::FString::Find(this_00,_Str,(int)sVar9,CaseSensitive,FromStart,-1);
LAB_14a51cb78:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar8 != -1) {
    pFVar3 = *(ForAnyElementType **)this;
    puVar1 = &param_1->field_0x10;
    if ((pFVar3->Data <= puVar1) &&
       (puVar1 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0xc)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar3,piVar2);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    pFVar4 = pFVar3->Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0xc) = *(undefined8 *)puVar1;
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)&param_1->field_0x18;
  }
  return true;
}

// Execute @ 14a52cb60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlVisibility::Execute
          (FRigUnit_SetControlVisibility *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Pattern,this->bVisible,&this->CachedControlIndices);
  return;
}

// RigVMExecute @ 14a552130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVisibility::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigElementKey *pFVar4;
  FString *pFVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar7->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FString *)pFVar7[1].Ptr;
  }
  else {
    pFVar5 = (FString *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  bVar3 = (bool)*puVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar9 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar4,pFVar5,bVar3,pTVar9);
  return;
}

// StaticExecute @ 14a592100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVisibility::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FString *param_3,bool param_4,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  URigHierarchy *this;
  FRigControlElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FRigControlElement *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType *local_50;
  FString local_48;
  
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  uVar13 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value);
  if (((bVar4) && (param_2->Name != (FName)0x0)) && (param_2->Type != None)) {
    if (param_2->Type != Control) goto LAB_14a592588;
    if (((local_60.Data <= param_2) &&
        (param_2 < (FRigElementKey *)(local_60.Data + (longlong)local_58._4_4_ * 0xc))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)local_58;
    if ((int)local_58 == local_58._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_60,(int *)((longlong)&local_58 + 4));
    }
    local_58 = CONCAT44(local_58._4_4_,iVar5 + 1);
    *(undefined8 *)(local_60.Data + (longlong)iVar5 * 0xc) = *(undefined8 *)param_2;
    *(uint *)(local_60.Data + (longlong)iVar5 * 0xc + 8) = (param_2->Name).Number;
  }
  else if (1 < (param_3->Data).ArrayNum) {
    local_50 = &local_60;
    ::FString::FString(&local_48,param_3);
    uVar10 = uVar13;
    uVar12 = uVar13;
    if (0 < (this->Elements).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this->Elements).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRigControlElement **)((this->Elements).AllocatorInstance.Data + uVar12);
        if (pFVar2 != (FRigControlElement *)0x0) {
          lVar7 = (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
          pUVar8 = FRigControlElement::StaticStruct();
          if (pUVar8 != (UScriptStruct *)0x0) {
            iVar5 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar7 + 0x38) < iVar5) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) &&
               (local_68 = pFVar2,
               bVar4 = UE::Core::Private::Function::
                       TFunctionRefCaller<`FRigUnit_SetControlVisibility::StaticExecute'::__l15::<lambda_1>,bool,FRigControlElement_*>
                       ::Call(&local_50,&local_68), !bVar4)) break;
          }
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar9 + 1) < (this->Elements).ArrayNum);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (param_5->ArrayNum != (int)local_58) {
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_5,(int)local_58,Default);
  }
  iVar5 = (int)local_58;
  if (0 < (int)local_58) {
    do {
      uVar9 = (uint)uVar13;
      uVar6 = 0;
      if ((int)uVar9 < param_5->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (int)local_58;
      }
      pFVar11 = (param_5->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar9 < iVar5) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FCachedRigElement::UpdateCache
                ((FCachedRigElement *)(pFVar11 + (longlong)(int)uVar9 * 0x20),
                 (FRigElementKey *)(local_60.Data + (longlong)(int)uVar9 * 0xc),this);
      uVar13 = (ulonglong)(uVar9 + 1);
      iVar5 = (int)local_58;
    } while ((int)(uVar9 + 1) < (int)local_58);
  }
  iVar5 = param_5->ArrayNum;
  pFVar11 = (param_5->AllocatorInstance).Data;
  pFVar14 = pFVar11 + (longlong)iVar5 * 0x20;
  while( true ) {
    if (param_5->ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedRigElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar14) break;
    if (((*(short *)(pFVar11 + 0xc) != -1) &&
        (bVar4 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar11 + 4)), bVar4)) &&
       ((*(longlong *)(pFVar11 + 4) != 0 &&
        ((*pFVar11 != (FScriptContainerElement)0x0 && (*(ushort *)(pFVar11 + 0xc) != 0xffff)))))) {
      uVar6 = (uint)*(ushort *)(pFVar11 + 0xc);
      if ((int)uVar6 < (this->Elements).ArrayNum) {
        uVar9 = 0;
        if ((int)uVar6 < (this->Elements).ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRigControlElement **)
                  ((this->Elements).AllocatorInstance.Data + (ulonglong)uVar6 * 8);
        if (pFVar2 != (FRigControlElement *)0x0) {
          lVar7 = (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
          pUVar8 = FRigControlElement::StaticStruct();
          if (pUVar8 != (UScriptStruct *)0x0) {
            iVar1 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar7 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              URigHierarchy::SetControlVisibility(this,pFVar2,param_4);
            }
          }
        }
      }
    }
    pFVar11 = pFVar11 + 0x20;
  }
LAB_14a592588:
  if ((FRigElementKey *)local_60.Data != (FRigElementKey *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

