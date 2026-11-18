// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f69c0

UScriptStruct * __cdecl FRigUnit_FilterItemsByMetadataTags::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FilterItemsByMetadataTags.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FilterItemsByMetadataTags.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags,
                         (UObject *)pUVar1,L"RigUnit_FilterItemsByMetadataTags");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FilterItemsByMetadataTags.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FilterItemsByMetadataTags.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f6a40

UScriptStruct * __thiscall
FRigUnit_FilterItemsByMetadataTags::GetExecuteContextStruct
          (FRigUnit_FilterItemsByMetadataTags *this)

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

// Execute @ 14a4f7340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FilterItemsByMetadataTags::Execute(FRigUnit_FilterItemsByMetadataTags *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2c8 [32];
  TArrayView<FName_const_,int> local_288;
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.DataPtr = (FName *)(this->Tags).AllocatorInstance.Data;
  iVar2 = (this->Tags).ArrayNum;
  local_278.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_288.ArrayNum = iVar2;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&local_288,this->NameSpace,
                this->Inclusive,&this->Result,&this->CachedIndices);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FilterItemsByMetadataTags::Execute
          (FRigUnit_FilterItemsByMetadataTags *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FName_const_,int> local_28;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = (FName *)(this->Tags).AllocatorInstance.Data;
  iVar2 = (this->Tags).ArrayNum;
  local_18.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.ArrayNum = iVar2;
  StaticExecute(param_1,&local_18,&local_28,this->NameSpace,this->Inclusive,&this->Result,
                &this->CachedIndices);
  return;
}

// RigVMExecute @ 14a53ea10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FilterItemsByMetadataTags::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  uchar *puVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar11;
  FRigVMSlice *pFVar12;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar13;
  FControlRigExecuteContext *pFVar14;
  TArrayView<FName_const_,int> local_48;
  TArrayView<FRigElementKey_const_,int> local_38;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar9->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar9[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar9[2].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  EVar1 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar11 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  local_48.DataPtr = *(FName **)puVar7;
  local_48.ArrayNum = *(int *)(puVar7 + 8);
  if (local_48.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.DataPtr = *(FRigElementKey **)puVar6;
  iVar2 = *(int *)(puVar6 + 8);
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.ArrayNum = iVar2;
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,&local_38,&local_48,EVar1,bVar4,pTVar11,pTVar13);
  return;
}

// StaticExecute @ 14a570900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_FilterItemsByMetadataTags::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TArrayView<FName_const_,int> *param_3,ERigMetaDataNameSpace param_4,bool param_5,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  ushort uVar2;
  URigHierarchy *pUVar3;
  FScriptContainerElement *pFVar4;
  FRigBaseElement *this;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRigBaseMetadata *pFVar9;
  FName *pFVar10;
  uint uVar11;
  uint uVar12;
  FRigElementKey *pFVar13;
  uint uVar14;
  FName *pFVar15;
  longlong lVar16;
  longlong local_res8;
  FName local_88;
  URigHierarchy *local_80;
  FName local_78;
  ForAnyElementType local_70;
  int local_68;
  int aiStack_64 [3];
  FName *local_58;
  undefined8 uStack_50;
  FName *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  piVar1 = &param_6->ArrayMax;
  pUVar3 = param_1->Hierarchy;
  param_6->ArrayNum = 0;
  local_80 = pUVar3;
  if (param_6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_6->AllocatorInstance,0,piVar1);
  }
  if (pUVar3 != (URigHierarchy *)0x0) {
    if (param_7->ArrayNum != param_2->ArrayNum) {
      param_7->ArrayNum = 0;
      if (param_7->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
      }
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (param_7,param_2->ArrayNum,Default);
    }
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    aiStack_64[0] = 0;
    local_58 = param_3->DataPtr;
    uStack_50 = *(undefined8 *)&param_3->ArrayNum;
    if ((param_4 != None) && (1 < (param_1->RigModulePrefix).Data.ArrayNum)) {
      uVar14 = param_3->ArrayNum;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if (0 < (int)uVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar14,&local_70,0,aiStack_64);
      }
      pFVar15 = param_3->DataPtr;
      pFVar5 = pFVar15 + param_3->ArrayNum;
      iVar8 = local_68;
      for (; local_68 = iVar8, pFVar15 != pFVar5; pFVar15 = pFVar15 + 1) {
        FControlRigExecuteContext::AdaptMetadataName
                  (param_1,(ERigMetaDataNameSpace)&local_88,(FName *)(ulonglong)param_4);
        if (((local_70.Data <= &local_88) &&
            (&local_88 < (FName *)(local_70.Data + (longlong)aiStack_64[0] * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_68 == aiStack_64[0]) {
          local_68 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_70,aiStack_64);
        }
        iVar8 = local_68 + 1;
        *(FName *)(local_70.Data + (longlong)local_68 * 8) = local_88;
      }
      local_48 = (FName *)local_70.Data;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_50 = CONCAT44(uStack_3c,iVar8);
      local_58 = local_48;
      iStack_40 = iVar8;
    }
    uVar14 = 0;
    if (0 < param_2->ArrayNum) {
      lVar16 = 0;
      local_res8 = 0;
      do {
        uVar12 = ~uVar14 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar14 < param_7->ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_7->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar3 = local_80;
        bVar7 = FCachedRigElement::UpdateCache
                          ((FCachedRigElement *)(pFVar4 + lVar16),
                           (FRigElementKey *)(&param_2->DataPtr->Type + local_res8),local_80);
        if (bVar7) {
          uVar11 = 0;
          if ((int)uVar14 < param_7->ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar2 = *(ushort *)((param_7->AllocatorInstance).Data + lVar16 + 0xc);
          if (uVar2 != 0xffff) {
            uVar11 = (uint)uVar2;
            if ((int)uVar11 < (pUVar3->Elements).ArrayNum) {
              uVar12 = 0;
              if ((int)uVar11 < (pUVar3->Elements).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this = *(FRigBaseElement **)
                      ((pUVar3->Elements).AllocatorInstance.Data + (ulonglong)uVar11 * 8);
              if (this != (FRigBaseElement *)0x0) {
                FLazyName::Resolve(&URigHierarchy::TagMetadataName);
                pFVar9 = FRigBaseElement::GetMetadata(this,&local_78,NameArray);
                if ((pFVar9 == (FRigBaseMetadata *)0x0) || (pFVar9->Type != NameArray)) {
                  if (param_5) goto LAB_14a570e78;
                }
                else if (param_5) {
                  if (local_58 != local_58 + (int)uStack_50) {
                    pFVar5 = (FName *)pFVar9[1]._padding_;
                    uVar11 = pFVar9[1].Name.ComparisonIndex.Value;
                    pFVar15 = local_58;
                    if (pFVar5 == pFVar5 + (int)uVar11) goto LAB_14a570e78;
                    do {
                      pFVar10 = pFVar5;
                      while (*pFVar10 != *pFVar15) {
                        pFVar10 = pFVar10 + 1;
                        if (pFVar10 == pFVar5 + (int)uVar11) goto LAB_14a570e78;
                      }
                      pFVar15 = pFVar15 + 1;
                    } while (pFVar15 != local_58 + (int)uStack_50);
                  }
                }
                else if (local_58 != local_58 + (int)uStack_50) {
                  pFVar5 = (FName *)pFVar9[1]._padding_;
                  pFVar15 = local_58;
                  do {
                    if (pFVar5 != pFVar5 + (int)pFVar9[1].Name.ComparisonIndex.Value) {
                      pFVar10 = pFVar5;
                      do {
                        if (*pFVar10 == *pFVar15) goto LAB_14a570e78;
                        pFVar10 = pFVar10 + 1;
                      } while (pFVar10 != pFVar5 + (int)pFVar9[1].Name.ComparisonIndex.Value);
                    }
                    pFVar15 = pFVar15 + 1;
                  } while (pFVar15 != local_58 + (int)uStack_50);
                }
                pFVar4 = (param_6->AllocatorInstance).Data;
                pFVar13 = &this->Key;
                if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + (longlong)*piVar1 * 0xc)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar8 = param_6->ArrayNum;
                if (iVar8 == *piVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&param_6->AllocatorInstance,piVar1);
                }
                param_6->ArrayNum = iVar8 + 1;
                pFVar4 = (param_6->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar13;
                *(uint *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = (this->Key).Name.Number;
              }
            }
          }
        }
LAB_14a570e78:
        uVar14 = uVar14 + 1;
        local_res8 = local_res8 + 0xc;
        lVar16 = lVar16 + 0x20;
      } while ((int)uVar14 < param_2->ArrayNum);
    }
    if ((FName *)local_70.Data != (FName *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  return;
}

