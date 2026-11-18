// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47c040

UScriptStruct * __cdecl FRigUnit_DiscardMatches::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DiscardMatches.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DiscardMatches.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DiscardMatches,(UObject *)pUVar1,
                         L"RigUnit_DiscardMatches");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DiscardMatches.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DiscardMatches.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47c0c0

UScriptStruct * __thiscall
FRigUnit_DiscardMatches::GetExecuteContextStruct(FRigUnit_DiscardMatches *this)

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

// Execute @ 14a47c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DiscardMatches::Execute(FRigUnit_DiscardMatches *this)

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
  local_278.DataPtr = (FRigElementKey *)(this->Excluded).AllocatorInstance.Data;
  iVar1 = (this->Excluded).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Message);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a526e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DiscardMatches::Execute(FRigUnit_DiscardMatches *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Excluded).AllocatorInstance.Data;
  iVar1 = (this->Excluded).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->Message);
  return;
}

// RigVMExecute @ 14a53ce10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DiscardMatches::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  FString *pFVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar5 = pFVar2->Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FString *)pFVar2[1].Ptr;
  }
  else {
    pFVar6 = (FString *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  local_18.DataPtr = *(FRigElementKey **)puVar5;
  iVar1 = *(int *)(puVar5 + 8);
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
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pFVar6);
  return;
}

// StaticExecute @ 14a56c070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DiscardMatches::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          FString *param_3)

{
  int *piVar1;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *pTVar2;
  FRigElementKey *pFVar3;
  FRigElementKey *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FText *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  FRigElementKey *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  undefined1 local_318 [8];
  ForAnyElementType local_310;
  undefined8 local_308;
  undefined8 local_300;
  uint local_2f8;
  FScriptContainerElement local_2f4;
  FText local_2f0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  uint local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  uint local_2c0;
  undefined1 local_2b8 [4];
  longlong local_2b4;
  FString *local_2a8;
  FText local_2a0;
  FControlRigExecuteContext local_288;
  
  lVar21 = *(longlong *)&param_1->field_0x8;
  local_2a8 = param_3;
  FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName);
  if (lVar21 == local_2b4) {
    FControlRigExecuteContext::FControlRigExecuteContext(&local_288,param_1);
    FVar16.Data = (FScriptContainerElement *)0x0;
    pFVar19 = param_2->DataPtr;
    iVar15 = 0;
    local_310.Data = (FScriptContainerElement *)0x0;
    local_308 = 0;
    pFVar4 = pFVar19 + param_2->ArrayNum;
    for (; pFVar19 != pFVar4; pFVar19 = pFVar19 + 1) {
      local_2d0 = (pFVar19->Name).Number;
      uVar5._0_1_ = pFVar19->Type;
      uVar5._1_3_ = *(undefined3 *)&pFVar19->field_0x1;
      uVar5._4_4_ = (pFVar19->Name).ComparisonIndex;
      local_2d8 = (undefined4)uVar5;
      uStack_2d4 = uVar5._4_4_;
      if (local_288.UnitContext.ConnectionResolve.Excluded.AllocatorInstance.Data !=
          local_288.UnitContext.ConnectionResolve.Excluded.AllocatorInstance.Data +
          (longlong)local_288.UnitContext.ConnectionResolve.Excluded.ArrayNum * 0x20) {
        pFVar13 = local_288.UnitContext.ConnectionResolve.Excluded.AllocatorInstance.Data;
        do {
          if ((*(longlong *)(pFVar13 + 4) == CONCAT44(local_2d0,uVar5._4_4_)) &&
             (*pFVar13 == (FScriptContainerElement)(undefined1)uVar5)) goto LAB_14a56c1fd;
          pFVar13 = pFVar13 + 0x20;
        } while (pFVar13 !=
                 local_288.UnitContext.ConnectionResolve.Excluded.AllocatorInstance.Data +
                 (longlong)local_288.UnitContext.ConnectionResolve.Excluded.ArrayNum * 0x20);
      }
      iVar11 = iVar15;
      if ((FVar16.Data <= pFVar19) &&
         (local_308._4_4_ = (int)(local_308 >> 0x20), lVar21 = (longlong)local_308._4_4_,
         pFVar19 < (FRigElementKey *)((longlong)FVar16.Data + lVar21 * 0xc))) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar16.Data = local_310.Data;
        iVar11 = (int)local_308;
      }
      if (iVar11 == local_308._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_310,(int *)((longlong)&local_308 + 4));
        FVar16.Data = local_310.Data;
      }
      iVar15 = iVar11 + 1;
      local_308 = CONCAT44(local_308._4_4_,iVar15);
      uVar8 = *(undefined3 *)&pFVar19->field_0x1;
      FVar9.Value = (pFVar19->Name).ComparisonIndex.Value;
      pFVar3 = (FRigElementKey *)((longlong)FVar16.Data + (longlong)iVar11 * 0xc);
      pFVar3->Type = pFVar19->Type;
      *(undefined3 *)&pFVar3->field_0x1 = uVar8;
      (pFVar3->Name).ComparisonIndex = (FNameEntryId)FVar9.Value;
      (((FRigElementKey *)((longlong)FVar16.Data + (longlong)iVar11 * 0xc))->Name).Number =
           (pFVar19->Name).Number;
      FVar16.Data = local_310.Data;
LAB_14a56c1fd:
    }
    FControlRigExecuteContext::~FControlRigExecuteContext(&local_288);
    iVar15 = (int)local_308;
    uVar17 = (ulonglong)(int)local_308;
    pFVar4 = (FRigElementKey *)(local_310.Data + uVar17 * 0xc);
    FVar16.Data = local_310.Data;
    while( true ) {
      if ((int)uVar17 != iVar15) {
        local_318[0] = 0;
        `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_318);
      }
      if ((FRigElementKey *)FVar16.Data == pFVar4) break;
      pFVar13 = (param_1->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data;
      local_2c0 = (((FRigElementKey *)FVar16.Data)->Name).Number;
      iVar11 = (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum;
      uVar6._0_1_ = ((FRigElementKey *)FVar16.Data)->Type;
      uVar6._1_3_ = *(undefined3 *)&((FRigElementKey *)FVar16.Data)->field_0x1;
      uVar6._4_4_ = (((FRigElementKey *)FVar16.Data)->Name).ComparisonIndex;
      local_2c8 = (undefined4)uVar6;
      uStack_2c4 = uVar6._4_4_;
      if (pFVar13 != pFVar13 + (longlong)iVar11 * 0x20) {
        pFVar20 = pFVar13;
        do {
          if ((CONCAT44(local_2c0,uVar6._4_4_) == *(longlong *)(pFVar20 + 4)) &&
             ((FScriptContainerElement)(undefined1)uVar6 == *pFVar20)) {
            uVar18 = (uint)((longlong)pFVar20 - (longlong)pFVar13 >> 5);
            if (uVar18 != 0xffffffff) {
              pTVar2 = &(param_1->UnitContext).ConnectionResolve.Matches;
              uVar12 = 0;
              if ((int)uVar18 < iVar11) {
                uVar12 = ~uVar18 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x20;
              if (*(longlong **)(pFVar13 + 0x10) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(pFVar13 + 0x10) + 0x10))();
              }
              iVar11 = (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum + ~uVar18;
              if (iVar11 != 0) {
                memmove(pFVar13,pFVar13 + 0x20,(longlong)iVar11 << 5);
              }
              piVar1 = &(param_1->UnitContext).ConnectionResolve.Matches.ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,&pTVar2->AllocatorInstance,
                         (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum,
                         &(param_1->UnitContext).ConnectionResolve.Matches.ArrayMax);
            }
            break;
          }
          pFVar20 = pFVar20 + 0x20;
        } while (pFVar20 != pFVar13 + (longlong)iVar11 * 0x20);
      }
      pTVar2 = &(param_1->UnitContext).ConnectionResolve.Excluded;
      pFVar14 = FText::FromString(&local_2a0,local_2a8);
      local_2f8 = (((FRigElementKey *)FVar16.Data)->Name).Number;
      local_300._0_1_ = ((FRigElementKey *)FVar16.Data)->Type;
      local_300._1_3_ = *(undefined3 *)&((FRigElementKey *)FVar16.Data)->field_0x1;
      local_300._4_4_ = (((FRigElementKey *)FVar16.Data)->Name).ComparisonIndex;
      local_2f4 = (FScriptContainerElement)0x1;
      local_2f0.TextData.Reference = (pFVar14->TextData).Reference;
      if (local_2f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f0.TextData.Reference + 8))
                  (local_2f0.TextData.Reference,local_2b8);
      }
      local_2f0.Flags = pFVar14->Flags;
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_300) &&
          ((FScriptContainerElement *)&local_300 <
           pFVar13 + (longlong)(param_1->UnitContext).ConnectionResolve.Excluded.ArrayMax * 0x20))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (param_1->UnitContext).ConnectionResolve.Excluded.ArrayNum;
      piVar1 = &(param_1->UnitContext).ConnectionResolve.Excluded.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_1->UnitContext).ConnectionResolve.Excluded.ArrayNum = iVar11 + 1;
      pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x20;
      *(undefined8 *)pFVar13 = local_300;
      *(uint *)(pFVar13 + 8) = local_2f8;
      pFVar13[0xc] = local_2f4;
      FText::FText((FText *)(pFVar13 + 0x10),&local_2f0);
      if (local_2f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
      }
      if (local_2a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
      }
      uVar17 = local_308 & 0xffffffff;
      FVar16.Data = FVar16.Data + 0xc;
    }
    if ((FRigElementKey *)local_310.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_310.Data);
    }
  }
  return;
}

