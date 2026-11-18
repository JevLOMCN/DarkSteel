// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ~FNiagaraSharedObject @ 149215850

void __thiscall FNiagaraSharedObject::~FNiagaraSharedObject(FNiagaraSharedObject *this)

{
  this->_padding_ = (longlong)&___7FNiagaraSharedObject__6B_;
  return;
}

// operator() @ 149217800

void __thiscall
`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec);
  uVar6 = 0;
  if (0 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
    lVar7 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)(FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7)
           == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeferredDeletionList[i] != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                             ,0x26,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)
                    (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7) + 8)
          == 0) {
        uVar4 = 0;
        if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined8 **)
                  (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data + lVar7);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar4 = 0;
        if ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (FNiagaraSharedObject::DeferredDeletionList.ArrayNum - uVar6) + -1;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 8,
                  FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data +
                  (longlong)(FNiagaraSharedObject::DeferredDeletionList.ArrayNum - iVar5) * 8,
                  (longlong)iVar5 << 3);
        }
        FNiagaraSharedObject::DeferredDeletionList.ArrayNum =
             FNiagaraSharedObject::DeferredDeletionList.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance,
                   FNiagaraSharedObject::DeferredDeletionList.ArrayNum,
                   &FNiagaraSharedObject::DeferredDeletionList.ArrayMax);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      }
    } while ((int)uVar6 < FNiagaraSharedObject::DeferredDeletionList.ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000149217a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec);
  return;
}

// Destroy @ 14922ab20

void __thiscall FNiagaraSharedObject::Destroy(FNiagaraSharedObject *this)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FNiagaraSharedObject *local_18 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&CritSec);
  bVar2 = IsThisNotNull(this,"FNiagaraSharedObject::Destroy");
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsThisNotNull(this, \"FNiagaraSharedObject::Destroy\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x17,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar3.Data = DeferredDeletionList.AllocatorInstance.Data;
  do {
    if (FVar3.Data ==
        DeferredDeletionList.AllocatorInstance.Data + (longlong)DeferredDeletionList.ArrayNum * 8) {
LAB_14922abc3:
      local_18[0] = this;
      if (((DeferredDeletionList.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           DeferredDeletionList.AllocatorInstance.Data + (longlong)DeferredDeletionList.ArrayMax * 8
          )) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DeferredDeletionList.ArrayNum == DeferredDeletionList.ArrayMax) {
        DeferredDeletionList.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&DeferredDeletionList.AllocatorInstance,&DeferredDeletionList.ArrayMax
                       );
      }
      lVar4 = (longlong)DeferredDeletionList.ArrayNum;
      DeferredDeletionList.ArrayNum = DeferredDeletionList.ArrayNum + 1;
      *(FNiagaraSharedObject **)(DeferredDeletionList.AllocatorInstance.Data + lVar4 * 8) =
           local_18[0];
                    /* WARNING: Could not recover jumptable at 0x00014922ac8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&CritSec);
      return;
    }
    if (*(FNiagaraSharedObject **)FVar3.Data == this) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeferredDeletionList.Contains(this) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSet.cpp"
                         ,0x19,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_14922abc3;
    }
    FVar3.Data = FVar3.Data + 8;
  } while( true );
}

// FlushDeletionList @ 1492307d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNiagaraSharedObject::FlushDeletionList(void)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78 [3];
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSharedObject::FlushDeletionList_::__l2::TSTR_FlushDeletionListCommand32>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78[0];
    local_48[1] = local_78[1];
    local_48[2] = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraSharedObject::FlushDeletionList'::__l2::TSTR_FlushDeletionListCommand32>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// operator() @ 15053bbe0

bool __thiscall `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5041675397956108348>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5041675397956108348>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraSharedObject::Unlock(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

