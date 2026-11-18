// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// operator() @ 1493375d0

void __thiscall
`FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraVariable *param_1,int param_2,int param_3)

{
  longlong *this_00;
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  FNiagaraTypeDefinition *pFVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  if ((param_2 != -1) && (uVar6 = (undefined2)param_3, param_3 != -1)) {
    this_00 = &param_1->_padding_;
    **(undefined1 **)this = 1;
    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
    bVar8 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
    uVar7 = (undefined2)param_2;
    if (bVar8) {
      lVar2 = *(longlong *)((longlong)this + 8);
      local_18 = CONCAT22(uVar6,uVar7);
      if ((0xfffe < param_2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSrcOffset < (int32)0xFFFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x4c,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0xfffe < param_3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InDestOffset < (int32)0xFFFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x4d,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(undefined4 **)(lVar2 + 0x10) <= &local_18) &&
          (&local_18 < *(undefined4 **)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)(lVar2 + 0x18);
      if (iVar9 == *(int *)(lVar2 + 0x1c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
      }
      *(int *)(lVar2 + 0x18) = iVar9 + 1;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 4) = local_18;
    }
    else {
      pFVar10 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
      bVar8 = FNiagaraTypeDefinition::IsUObject(pFVar10);
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if (bVar8) {
        local_14 = CONCAT22(uVar6,uVar7);
        if ((0xfffe < param_2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSrcOffset < (int32)0xFFFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x5f,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0xfffe < param_3) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InDestOffset < (int32)0xFFFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x60,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pFVar3[4].Data <= (FScriptContainerElement *)&local_14) &&
            ((FScriptContainerElement *)&local_14 <
             pFVar3[4].Data + (longlong)*(int *)((longlong)&pFVar3[5].Data + 4) * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar3[5].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,pFVar3 + 4,piVar1);
        }
        *(int *)&pFVar3[5].Data = iVar9 + 1;
        *(undefined4 *)(pFVar3[4].Data + (longlong)iVar9 * 4) = local_14;
      }
      else {
        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
        iVar9 = FNiagaraTypeDefinition::GetSize(pFVar10);
        local_c = (undefined2)iVar9;
        local_10 = CONCAT22(uVar6,uVar7);
        if ((0xfffe < param_2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSrcOffset < (int32)0xFFFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x37,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0xfffe < param_3) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InDestOffset < (int32)0xFFFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x38,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0xfffe < iVar9) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSize < (int32)0xFFFF",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x39,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pFVar3->Data <= (FScriptContainerElement *)&local_10) &&
            ((FScriptContainerElement *)&local_10 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 6)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x206,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar9 + 1;
        pFVar4 = pFVar3->Data;
        *(undefined4 *)(pFVar4 + (longlong)iVar9 * 6) = local_10;
        *(undefined2 *)(pFVar4 + (longlong)iVar9 * 6 + 4) = local_c;
      }
    }
  }
  return;
}

// operator() @ 1493379c0

void __thiscall
`FNiagaraParameterStoreBinding::GetBindingData'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraVariable *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong local_28;
  FNiagaraTypeDefinitionHandle FStack_20;
  int iStack_1c;
  int local_18;
  
  if ((param_2 != -1) && (param_3 != -1)) {
    local_28 = 0;
    FNiagaraTypeDefinitionHandle::Register(&FStack_20,&FNiagaraTypeDefinition::Vec4Def);
    FStack_20.RegisteredTypeIndex = (int)param_1->_padding_;
    local_28 = param_1->_padding_;
    pFVar3 = *(ForAnyElementType **)this;
    iStack_1c = param_2;
    local_18 = param_3;
    if ((pFVar3->Data <= (FScriptContainerElement *)&local_28) &&
       (((FScriptContainerElement *)&local_28 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x14 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    pFVar4 = pFVar3->Data;
    pFVar2 = pFVar4 + (longlong)iVar7 * 0x14;
    *(longlong *)pFVar2 = local_28;
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(iStack_1c,FStack_20.RegisteredTypeIndex);
    *(int *)(pFVar4 + (longlong)iVar7 * 0x14 + 0x10) = local_18;
  }
  return;
}

// BindParameters @ 14933e070

bool __thiscall
FNiagaraParameterStoreBinding::BindParameters
          (FNiagaraParameterStoreBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraParameterStore *param_2,
          TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool local_res8 [8];
  undefined1 local_res20 [8];
  <lambda_1> local_68;
  FNiagaraVariable local_58;
  
  (this->InterfaceBindings).ArrayNum = 0;
  if ((this->InterfaceBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->InterfaceBindings).AllocatorInstance,0,
               &(this->InterfaceBindings).ArrayMax);
  }
  (this->ParameterBindings).ArrayNum = 0;
  if ((this->ParameterBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,0,(ForAnyElementType *)this,0,&(this->ParameterBindings).ArrayMax);
  }
  (this->UObjectBindings).ArrayNum = 0;
  if ((this->UObjectBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->UObjectBindings).AllocatorInstance,0,&(this->UObjectBindings).ArrayMax)
    ;
  }
  local_68.bAnyBinding = local_res8;
  local_res8[0] = false;
  local_68.__this = this;
  if (param_3 == (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0) {
    local_68.bAnyBinding = local_res8;
    MatchParameters<_FNiagaraParameterStoreBinding::BindParameters_::__l2::<lambda_1>_>
              (param_1,param_2,&local_68);
    if (local_res8[0] == false) {
      return false;
    }
  }
  else {
    iVar2 = param_3->ArrayNum;
    if (iVar2 == 0) {
      return false;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 0x14;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraBoundParameter_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (pFVar3 == pFVar1) break;
      local_58._padding_ = *(longlong *)pFVar3;
      local_58._padding_._0_4_ = *(undefined4 *)(pFVar3 + 8);
      local_58.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.VarData.ArrayNum = 0;
      local_58.VarData.ArrayMax = 0;
      `FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>::operator()
                (&local_68,&local_58,*(int *)(pFVar3 + 0xc),*(int *)(pFVar3 + 0x10));
      if (local_58.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.VarData.AllocatorInstance.Data);
      }
      pFVar3 = pFVar3 + 0x14;
    }
    local_res8[0] = true;
  }
  CopyParameters(this,param_1,param_2);
  return local_res8[0];
}

// CopyParameters @ 149341990

void __thiscall
FNiagaraParameterStoreBinding::CopyParameters
          (FNiagaraParameterStoreBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraParameterStore *param_2)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67 [7];
  uint local_60 [2];
  uint local_58 [2];
  uint *local_50;
  uint *local_48;
  FNiagaraParameterStore *local_40;
  
  iVar4 = (this->ParameterBindings).ArrayNum;
  pFVar7 = (this->ParameterBindings).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar4 * 6;
  while( true ) {
    if ((this->ParameterBindings).ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FParameterBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar7 == pFVar1) break;
    uVar2 = *(ushort *)(pFVar7 + 4);
    uVar3 = *(ushort *)(pFVar7 + 2);
    local_58[0] = (uint)uVar2;
    local_60[0] = (uint)*(ushort *)pFVar7;
    if ((param_2->ParameterData).ArrayNum < (int)((uint)uVar2 + (uint)*(ushort *)pFVar7)) {
      local_50 = local_60;
      local_48 = local_58;
      local_40 = param_2;
      `FNiagaraParameterStore::GetParameterData'::__l2::<lambda_1>::operator()(&local_50);
    }
    pFVar9 = (param_2->ParameterData).AllocatorInstance.Data + (int)local_60[0];
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x255,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((param_1->ParameterData).ArrayNum < (int)((uint)uVar2 + (uint)uVar3)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && (Offset + Size) <= ParameterData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x256,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    _Dst = (param_1->ParameterData).AllocatorInstance.Data + uVar3;
    if (_Dst != pFVar9) {
      memcpy(_Dst,pFVar9,(ulonglong)uVar2);
    }
    param_1->bParametersDirty = 1;
    pFVar7 = pFVar7 + 6;
  }
  pFVar7 = (this->InterfaceBindings).AllocatorInstance.Data;
  iVar4 = (this->InterfaceBindings).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar4 * 4;
  while( true ) {
    if ((this->InterfaceBindings).ArrayNum != iVar4) {
      local_68 = 0;
      `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FInterfaceBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_68);
    }
    if (pFVar7 == pFVar1) break;
    uVar2 = *(ushort *)pFVar7;
    uVar3 = *(ushort *)(pFVar7 + 2);
    if ((int)(uint)uVar2 < (param_2->DataInterfaces).ArrayNum) {
      if ((param_2->DataInterfaces).ArrayNum <= (int)(uint)uVar2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pUVar8 = *(UObject **)
                ((param_2->DataInterfaces).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
    }
    else {
      pUVar8 = (UObject *)0x0;
    }
    if ((param_1->DataInterfaces).ArrayNum <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (param_1->DataInterfaces).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    *(UObject **)(pFVar9 + (ulonglong)uVar3 * 8) = pUVar8;
    param_1->bInterfacesDirty = 1;
    pFVar7 = pFVar7 + 4;
  }
  pFVar7 = (this->UObjectBindings).AllocatorInstance.Data;
  iVar4 = (this->UObjectBindings).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar4 * 4;
  while( true ) {
    if ((this->UObjectBindings).ArrayNum != iVar4) {
      local_67[0] = 0;
      `TCheckedPointerIterator<FNiagaraParameterStoreBinding::FUObjectBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_67);
    }
    if (pFVar7 == pFVar1) break;
    uVar2 = *(ushort *)pFVar7;
    uVar3 = *(ushort *)(pFVar7 + 2);
    if ((int)(uint)uVar2 < (param_2->UObjects).ArrayNum) {
      if ((param_2->UObjects).ArrayNum <= (int)(uint)uVar2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pUVar8 = *(UObject **)((param_2->UObjects).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
    }
    else {
      pUVar8 = (UObject *)0x0;
    }
    if ((param_1->UObjects).ArrayNum <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (param_1->UObjects).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    *(UObject **)(pFVar9 + (ulonglong)uVar3 * 8) = pUVar8;
    param_1->bUObjectsDirty = 1;
    pFVar7 = pFVar7 + 4;
  }
  return;
}

// Dump @ 149345500

void __thiscall
FNiagaraParameterStoreBinding::Dump
          (FNiagaraParameterStoreBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraParameterStore *param_2)

{
  return;
}

// Empty @ 149345c10

void __thiscall
FNiagaraParameterStoreBinding::Empty
          (FNiagaraParameterStoreBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraParameterStore *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_1 != (FNiagaraParameterStore *)0x0) {
    pFVar3 = (param_1->SourceStores).AllocatorInstance.Data;
    iVar6 = (param_1->SourceStores).ArrayNum;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)iVar6 * 8; pFVar9 = pFVar9 + 8) {
      if (*(FNiagaraParameterStore **)pFVar9 == param_2) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (uVar8 != 0xffffffff) {
          uVar7 = 0;
          if ((int)(uVar8 + 1) <= iVar6) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (param_1->SourceStores).ArrayNum;
          pFVar3 = (param_1->SourceStores).AllocatorInstance.Data;
          iVar6 = iVar2 + ~uVar8;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                    (longlong)iVar6 << 3);
          }
          piVar1 = &(param_1->SourceStores).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
  }
  (this->ParameterBindings).ArrayNum = 0;
  if ((this->ParameterBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,0,(ForAnyElementType *)this,0,&(this->ParameterBindings).ArrayMax);
  }
  (this->InterfaceBindings).ArrayNum = 0;
  if ((this->InterfaceBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->InterfaceBindings).AllocatorInstance,0,
               &(this->InterfaceBindings).ArrayMax);
  }
  (this->UObjectBindings).ArrayNum = 0;
  if ((this->UObjectBindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->UObjectBindings).AllocatorInstance,0,&(this->UObjectBindings).ArrayMax)
    ;
  }
  return;
}

// GetBindingData @ 14934eb80

void __cdecl
FNiagaraParameterStoreBinding::GetBindingData
          (FNiagaraParameterStore *param_1,FNiagaraParameterStore *param_2,
          TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *param_3)

{
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  MatchParameters<_FNiagaraParameterStoreBinding::GetBindingData_::__l2::<lambda_1>_>
            (param_1,param_2,(<lambda_1>)param_3);
  return;
}

// VerifyBinding @ 149375210

bool __thiscall
FNiagaraParameterStoreBinding::VerifyBinding
          (FNiagaraParameterStoreBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraParameterStore *param_2)

{
  return true;
}

