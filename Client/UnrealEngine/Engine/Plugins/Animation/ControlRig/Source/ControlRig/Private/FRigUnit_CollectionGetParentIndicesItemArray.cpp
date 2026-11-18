// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c7dc0

UScriptStruct * __cdecl FRigUnit_CollectionGetParentIndicesItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray,
                         (UObject *)pUVar1,L"RigUnit_CollectionGetParentIndicesItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray.
         OuterSingleton;
}

// Execute @ 14a525580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionGetParentIndicesItemArray::Execute
          (FRigUnit_CollectionGetParentIndicesItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->ParentIndices);
  return;
}

// Execute @ 14a525600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionGetParentIndicesItemArray::Execute
          (FRigUnit_CollectionGetParentIndicesItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->ParentIndices);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530a20

UScriptStruct * __thiscall
FRigUnit_CollectionGetParentIndicesItemArray::GetExecuteContextStruct
          (FRigUnit_CollectionGetParentIndicesItemArray *this)

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

// RigVMExecute @ 14a5380f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionGetParentIndicesItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  iVar1 = *(int *)(puVar6 + 8);
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[1].Ptr;
  local_18.DataPtr = *(FRigElementKey **)puVar6;
  if (iVar1 < 0) {
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
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pTVar3);
  return;
}

// StaticExecute @ 14a5687d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionGetParentIndicesItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *_Dst;
  undefined8 uVar1;
  ERigElementType EVar2;
  undefined4 uVar3;
  URigHierarchy *pUVar4;
  FRigElementKey *pFVar5;
  code *pcVar6;
  FName FVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FRigBaseElement *pFVar12;
  uint uVar13;
  FRigElementKey *pFVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong local_res20;
  longlong local_88;
  ERigElementType local_80;
  FNameEntryId FStack_7c;
  uint local_78;
  FRigElementWeight local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  piVar19 = &param_3->ArrayNum;
  if (param_1->Hierarchy == (URigHierarchy *)0x0) {
    *piVar19 = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      return;
    }
  }
  else {
    iVar10 = *piVar19;
    uVar23 = param_2->ArrayNum;
    if (iVar10 < (int)uVar23) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23 - iVar10,&param_3->AllocatorInstance,piVar19,&param_3->ArrayMax);
    }
    else {
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if ((int)uVar23 < iVar10) {
        uVar21 = iVar10 - uVar23;
        if (((int)(uVar23 | uVar21) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar21 != 0) {
          _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar23 * 4;
          iVar10 = (*piVar19 - uVar23) - uVar21;
          if (iVar10 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar21 * 4,(longlong)iVar10 << 2);
          }
          *piVar19 = *piVar19 - uVar21;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_3->AllocatorInstance,*piVar19,&param_3->ArrayMax);
        }
      }
    }
    fVar8 = __real_322bcc77;
    uVar24 = 0;
    uVar23 = 0;
    if (0 < param_2->ArrayNum) {
      local_88 = 0;
      local_res20 = 0;
      uVar18 = uVar24;
      do {
        uVar25 = (uint)uVar18;
        uVar22 = ~uVar25 >> 0x1f;
        uVar21 = uVar23;
        if ((int)uVar25 < param_3->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((param_3->AllocatorInstance).Data + local_88) = 0xffffffff;
        pUVar4 = param_1->Hierarchy;
        uVar21 = uVar23;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = URigHierarchy::GetIndex(pUVar4,param_2->DataPtr + (int)uVar25,true);
        if (iVar10 != -1) {
          uVar21 = uVar23;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar21 = uVar22;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EVar2 = (&param_2->DataPtr->Type)[local_res20];
          uVar13 = 0;
          uVar21 = 0;
          if (EVar2 == Bone) {
            iVar10 = URigHierarchy::GetFirstParent(param_1->Hierarchy,iVar10);
            uVar16 = uVar13;
            if ((int)uVar25 < param_3->ArrayNum) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(int *)((param_3->AllocatorInstance).Data + local_88) = iVar10;
          }
          else {
            if (EVar2 == Curve) goto LAB_14a568f31;
            pFVar12 = URigHierarchy::Get(param_1->Hierarchy,iVar10);
            if (pFVar12 != (FRigBaseElement *)0x0) {
              URigHierarchy::GetParents(param_1->Hierarchy,local_60,iVar10,false);
              uVar18 = uVar24;
              uVar20 = uVar24;
              if (0 < local_60[0].ArrayNum) {
                do {
                  uVar16 = (uint)uVar18;
                  URigHierarchy::GetParentWeight(param_1->Hierarchy,&local_70,pFVar12,uVar16,false);
                  if (((fVar8 < local_70.Location) || (fVar8 < local_70.Rotation)) ||
                     (fVar8 < local_70.Scale)) {
                    uVar11 = uVar21;
                    if ((int)uVar16 < local_60[0].ArrayNum) {
                      uVar11 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar3 = *(undefined4 *)(local_60[0].AllocatorInstance.Data + uVar20);
                    uVar11 = uVar21;
                    if ((int)uVar25 < param_3->ArrayNum) {
                      uVar11 = uVar22;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    *(undefined4 *)((param_3->AllocatorInstance).Data + local_88) = uVar3;
                  }
                  uVar18 = (ulonglong)(uVar16 + 1);
                  uVar20 = uVar20 + 4;
                } while ((int)(uVar16 + 1) < local_60[0].ArrayNum);
              }
              if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].AllocatorInstance.Data);
              }
            }
          }
          piVar19 = &param_3->ArrayNum;
          uVar16 = uVar21;
          if ((int)uVar25 < *piVar19) {
            uVar16 = uVar22;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)((param_3->AllocatorInstance).Data + local_88) != -1) {
            if ((int)uVar25 < *piVar19) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = *(int *)((param_3->AllocatorInstance).Data + local_88);
            uVar21 = uVar13;
            if ((int)uVar25 < *piVar19) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)((param_3->AllocatorInstance).Data + local_88) = 0xffffffff;
            while( true ) {
              uVar21 = uVar13;
              if ((int)uVar25 < *piVar19) {
                uVar21 = uVar22;
              }
              if ((uVar21 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(int *)((param_3->AllocatorInstance).Data + local_88) != -1) || (iVar10 == -1))
              break;
              pUVar4 = param_1->Hierarchy;
              if ((iVar10 < 0) || ((pUVar4->Elements).ArrayNum <= iVar10)) {
                local_80 = None;
                FStack_7c.Value = 0;
                local_78 = 0;
              }
              else {
                if ((iVar10 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar15 = *(longlong *)
                          ((pUVar4->Elements).AllocatorInstance.Data + (longlong)iVar10 * 8);
                uVar1 = *(undefined8 *)(lVar15 + 0x10);
                local_78 = *(uint *)(lVar15 + 0x18);
                FStack_7c.Value = (uint)((ulonglong)uVar1 >> 0x20);
                local_80 = (ERigElementType)uVar1;
              }
              pFVar5 = param_2->DataPtr;
              if (pFVar5 != pFVar5 + param_2->ArrayNum) {
                FVar7.Number = local_78;
                FVar7.ComparisonIndex.Value = FStack_7c.Value;
                pFVar14 = pFVar5;
                do {
                  if ((pFVar14->Name == FVar7) && (pFVar14->Type == local_80)) {
                    lVar15 = ((longlong)pFVar14 - (longlong)pFVar5) / 6 +
                             ((longlong)pFVar14 - (longlong)pFVar5 >> 0x3f);
                    iVar17 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
                    goto LAB_14a568ea0;
                  }
                  pFVar14 = pFVar14 + 1;
                } while (pFVar14 != pFVar5 + param_2->ArrayNum);
              }
              iVar17 = -1;
LAB_14a568ea0:
              uVar21 = uVar13;
              if ((int)uVar25 < *piVar19) {
                uVar21 = uVar22;
              }
              if ((uVar21 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(int *)((param_3->AllocatorInstance).Data + local_88) = iVar17;
              iVar10 = URigHierarchy::GetFirstParent(param_1->Hierarchy,iVar10);
            }
          }
        }
LAB_14a568f31:
        local_88 = local_88 + 4;
        local_res20 = local_res20 + 0xc;
        uVar18 = (ulonglong)(uVar25 + 1);
      } while ((int)(uVar25 + 1) < param_2->ArrayNum);
    }
  }
  return;
}

