// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 14225add0

void __thiscall
`UObjectLoadAllCompiledInDefaultProperties'::__l5::<lambda_1>::operator()
          (void *this,wchar_t *param_1,UClass *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  longlong lVar8;
  ForAnyElementType *pFVar9;
  longlong local_res8;
  UClass *local_28;
  UClass *local_20;
  UClass *local_18;
  UClass *local_10;
  
  TVar7 = (TObjectPtr<UObject>_u_0)param_2;
  while( true ) {
    if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr ==
        (TObjectPtr<UObject>_u_0)0x0) {
      pUVar5 = CastChecked<UPackage,UObject>((UObject *)TVar7);
    }
    else {
      pUVar5 = (UPackage *)0x0;
      if ((*(uint *)((longlong)TVar7 + 8) >> 0x1c & 1) != 0) {
        pUVar5 = GetObjectExternalPackageThreadSafe((UObjectBase *)TVar7);
      }
    }
    if (pUVar5 != (UPackage *)0x0) break;
    TVar7 = (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr
    ;
  }
  lVar8 = pUVar5->_padding_;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  TVar7 = (TObjectPtr<UObject>_u_0)param_2;
  if (lVar8 == local_res8) {
    pFVar9 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_28 = param_2;
    if (((pFVar9->Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&pFVar9[1].Data;
    piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar9,piVar1);
    }
    lVar8 = (longlong)iVar4;
    *(int *)&pFVar9[1].Data = iVar4 + 1;
    pUVar6 = local_28;
  }
  else {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr
          == (TObjectPtr<UObject>_u_0)0x0) {
        pUVar5 = CastChecked<UPackage,UObject>((UObject *)TVar7);
      }
      else {
        pUVar5 = (UPackage *)0x0;
        if ((*(uint *)((longlong)TVar7 + 8) >> 0x1c & 1) != 0) {
          pUVar5 = GetObjectExternalPackageThreadSafe((UObjectBase *)TVar7);
        }
      }
      if (pUVar5 != (UPackage *)0x0) break;
      TVar7.DebugPtr = ((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr;
    }
    if ((FName)pUVar5->_padding_ == LongEnginePackageName) {
      pFVar9 = *(ForAnyElementType **)((longlong)this + 0x18);
      local_20 = param_2;
      if (((pFVar9->Data <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 <
           pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar9,piVar1);
      }
      lVar8 = (longlong)iVar4;
      *(int *)&pFVar9[1].Data = iVar4 + 1;
      pUVar6 = local_20;
    }
    else {
      pFVar9 = *(ForAnyElementType **)((longlong)this + 8);
      local_18 = param_2;
      if (((pFVar9->Data <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 <
           pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar9,piVar1);
      }
      lVar8 = (longlong)iVar4;
      *(int *)&pFVar9[1].Data = iVar4 + 1;
      pUVar6 = local_18;
    }
  }
  *(UClass **)(pFVar9->Data + lVar8 * 8) = pUVar6;
  pFVar9 = *(ForAnyElementType **)this;
  local_10 = param_2;
  if (((pFVar9->Data <= (FScriptContainerElement *)&local_10) &&
      ((FScriptContainerElement *)&local_10 <
       pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)&pFVar9[1].Data;
  piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar9,piVar1);
  }
  *(int *)&pFVar9[1].Data = iVar4 + 1;
  *(UClass **)(pFVar9->Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// operator() @ 14225b850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UObjectLoadAllCompiledInDefaultProperties'::__l5::<lambda_3>::operator()
          (void *this,TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  FName FVar4;
  UPackage *pUVar5;
  FName *pFVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  TObjectPtr<UObject>_u_0 *pTVar8;
  undefined1 auStackY_10d8 [32];
  undefined1 local_1098 [4];
  FName local_1094;
  FName local_108c;
  FName local_1080;
  FName local_1078 [2];
  wchar_t local_1068 [1040];
  wchar_t local_848 [1040];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14225b86f;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_10d8;
  pTVar8 = (TObjectPtr<UObject>_u_0 *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pTVar1 = pTVar8 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1098);
    }
    if (pTVar8 == pTVar1) break;
    TVar3 = (TObjectPtr<UObject>_u_0)pTVar8->DebugPtr;
    TVar7 = TVar3;
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr
          == (TObjectPtr<UObject>_u_0)0x0) {
        pUVar5 = CastChecked<UPackage,UObject>((UObject *)TVar7);
      }
      else {
        pUVar5 = (UPackage *)0x0;
        if ((*(uint *)((longlong)TVar7 + 8) >> 0x1c & 1) != 0) {
          pUVar5 = GetObjectExternalPackageThreadSafe((UObjectBase *)TVar7);
        }
      }
      if (pUVar5 != (UPackage *)0x0) break;
      TVar7 = (TObjectPtr<UObject>_u_0)
              ((TObjectPtr<UObject>_u_0 *)((longlong)TVar7 + 0x20))->DebugPtr;
    }
    local_1094 = (FName)pUVar5->_padding_;
    ::FName::ToStringInternal(&local_1094,local_848,0x40b);
    local_108c.ComparisonIndex.Value = *(undefined4 *)((longlong)TVar3 + 0x18);
    local_108c.Number = *(undefined4 *)((longlong)TVar3 + 0x1c);
    ::FName::ToStringInternal(&local_108c,local_1068,0x40b);
    pFVar6 = ::FName::FName(&local_1080,local_1068);
    FVar4 = *pFVar6;
    pFVar6 = ::FName::FName(local_1078,local_848);
    NotifyRegistrationEvent
              (*pFVar6,FVar4,NRT_Class,NRP_Finished,(_func___cdecl_UObject_ptr *)0x0,false,
               TVar3.DebugPtr);
    pTVar8 = pTVar8 + 1;
  }
  return;
}

