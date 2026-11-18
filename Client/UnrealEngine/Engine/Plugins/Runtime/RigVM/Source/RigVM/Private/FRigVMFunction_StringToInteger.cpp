// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a12d0d0

UScriptStruct * __cdecl FRigVMFunction_StringToInteger::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_StringToInteger.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_StringToInteger.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringToInteger,(UObject *)pUVar1,
                         L"RigVMFunction_StringToInteger");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_StringToInteger_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_StringToInteger.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_StringToInteger.OuterSingleton;
}

// GetExecuteContextStruct @ 14a12d1b0

UScriptStruct * __thiscall
FRigVMFunction_StringToInteger::GetExecuteContextStruct(FRigVMFunction_StringToInteger *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a12dd80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_StringToInteger::Execute(FRigVMFunction_StringToInteger *this)

{
  FRigVMExecuteContext local_118;
  
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
  StaticExecute(&local_118,&this->Value,this->ChopLeft,this->ChopRight,&this->Result,&this->Success)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3f10

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
FRigVMFunction_StringToInteger::Execute
          (FRigVMFunction_StringToInteger *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->ChopLeft,this->ChopRight,&this->Result,&this->Success);
  return;
}

// RigVMExecute @ 14a1d3e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_StringToInteger::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  int *piVar8;
  bool *pbVar9;
  FRigVMExecuteContext *pFVar10;
  
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
    pFVar5 = (FString *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FString *)
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
    puVar6 = pFVar7[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  bVar3 = (bool)*puVar6;
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
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
  bVar4 = (bool)*puVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  piVar8 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar5,bVar3,bVar4,piVar8,pbVar9);
  return;
}

// StaticExecute @ 14a1e7700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_StringToInteger::StaticExecute
          (FRigVMExecuteContext *param_1,FString *param_2,bool param_3,bool param_4,int *param_5,
          bool *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  FString local_48;
  FString local_38;
  FScriptContainerElement *pFVar15;
  
  pFVar10 = (FScriptContainerElement *)0x0;
  *param_6 = false;
  *param_5 = -1;
  iVar5 = (param_2->Data).ArrayNum;
  pFVar7 = (param_2->Data).AllocatorInstance.Data;
  iVar11 = 0;
  pFVar9 = (FScriptContainerElement *)(ulonglong)(iVar5 - 1);
  if (iVar5 == 0) {
    pFVar9 = pFVar10;
  }
  uVar3 = 0;
  if (param_3) {
    iVar5 = (int)pFVar9;
    iVar13 = iVar5 + -1;
    if (-1 < iVar13) {
      pFVar12 = pFVar7 + (longlong)iVar13 * 2;
      do {
        if (((iVar13 < 0) || (iVar5 <= iVar13)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = iswdigit(*(wint_t *)pFVar12);
        if (iVar4 == 0) {
          if ((iVar13 != 0) || (*(wint_t *)pFVar12 != 0x2d)) {
            iVar4 = iVar13 + 1;
            uVar8 = 0x7fffffff;
            if (iVar13 + 1 < 0) {
              iVar4 = iVar11;
              uVar8 = iVar13 + 0x80000000;
            }
            if (iVar5 < iVar4) {
              iVar4 = iVar5;
            }
            uVar14 = iVar5 - iVar4;
            if ((int)uVar8 < iVar5 - iVar4) {
              uVar14 = uVar8;
            }
            pFVar7 = pFVar7 + (longlong)iVar4 * 2;
            uVar8 = uVar3;
            if (0 < (int)uVar14) {
              uVar8 = uVar14;
            }
            pFVar9 = (FScriptContainerElement *)(ulonglong)uVar8;
          }
          break;
        }
        pFVar12 = pFVar12 + -2;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
  }
  uVar8 = (uint)pFVar9;
  if (param_4) {
    pFVar12 = pFVar7;
    pFVar15 = pFVar10;
    if (0 < (int)uVar8) {
      do {
        uVar14 = (uint)pFVar15;
        if ((((int)uVar14 < 0) || ((int)uVar8 <= (int)uVar14)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = iswdigit(*(wint_t *)pFVar12);
        if ((iVar5 == 0) && ((uVar14 != 0 || (*(wint_t *)pFVar12 != 0x2d)))) {
          if ((int)uVar14 < (int)uVar8) {
            uVar8 = uVar14;
          }
          uVar14 = uVar3;
          if (0 < (int)uVar8) {
            uVar14 = uVar8;
          }
          pFVar9 = (FScriptContainerElement *)(ulonglong)uVar14;
          break;
        }
        pFVar12 = pFVar12 + 2;
        pFVar15 = (FScriptContainerElement *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (int)uVar8);
      uVar8 = (uint)pFVar9;
    }
    if (uVar8 != 0) {
      while( true ) {
        uVar8 = (uint)pFVar9;
        if ((((int)(uVar8 - 1) < 0) || ((int)uVar8 <= (int)(uVar8 - 1))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = iswdigit(*(wint_t *)(pFVar7 + ((longlong)(int)uVar8 + -1) * 2));
        if ((iVar5 != 0) || ((uVar8 == 1 && (*(short *)pFVar7 == 0x2d)))) goto LAB_14a1e7957;
        if ((int)(uVar8 - 1) < (int)uVar8) {
          uVar8 = uVar8 - 1;
        }
        uVar14 = uVar3;
        if (0 < (int)uVar8) {
          uVar14 = uVar8;
        }
        if (uVar14 == 0) break;
        pFVar9 = (FScriptContainerElement *)(ulonglong)uVar14;
      }
    }
  }
  else {
LAB_14a1e7957:
    if (uVar8 != 0) {
      pFVar9 = pFVar7;
      pFVar12 = pFVar10;
      if (0 < (int)uVar8) {
        do {
          iVar5 = (int)pFVar12;
          if (((iVar5 < 0) || ((int)uVar8 <= iVar5)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar13 = iswdigit(*(wint_t *)pFVar9);
          if (iVar13 == 0) {
            if (iVar5 != 0) {
              return;
            }
            if (*(wint_t *)pFVar9 != 0x2d) {
              return;
            }
          }
          pFVar9 = pFVar9 + 2;
          pFVar12 = (FScriptContainerElement *)(ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < (int)uVar8);
      }
      iVar5 = (param_2->Data).ArrayNum;
      uVar14 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar14 = uVar3;
      }
      if (uVar8 == uVar14) {
        if (iVar5 == 0) {
          iVar5 = _wtoi(L"");
          *param_5 = iVar5;
        }
        else {
          iVar5 = _wtoi((wchar_t *)(param_2->Data).AllocatorInstance.Data);
          *param_5 = iVar5;
        }
      }
      else {
        pFVar6 = ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)pFVar7,uVar8);
        if (&local_38 != pFVar6) {
          pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = (pFVar6->Data).ArrayNum;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar7 = (FScriptContainerElement *)L"";
        if (iVar11 != 0) {
          pFVar7 = pFVar10;
        }
        iVar5 = _wtoi((wchar_t *)pFVar7);
        *param_5 = iVar5;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
      }
      *param_6 = true;
    }
  }
  return;
}

