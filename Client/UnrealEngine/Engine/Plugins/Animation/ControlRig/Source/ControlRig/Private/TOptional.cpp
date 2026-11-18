// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// operator= @ 14a2277d0

TOptional<FName> * __thiscall
TOptional<FName>::operator=(TOptional<FName> *this,TOptional<FName> *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FName> *pTVar4;
  
  if (param_1 != this) {
    if ((param_1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((this->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (this->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->field0_0x0).TypedValue.Number = 0;
        return this;
      }
    }
    else {
      FVar1 = (param_1->field0_0x0).TypedValue;
      (this->field0_0x0).TypedValue = FVar1;
      if ((FVar1.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<FName> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// operator= @ 14a227840

TOptional<FString> * __thiscall
TOptional<FString>::operator=(TOptional<FString> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FString> *pTVar4;
  
  if (param_1 != (FString *)this) {
    pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&this->field0_0x0 + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)&this->field0_0x0 + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// Serialize @ 14a28d870

void __thiscall TOptional<FName>::Serialize(TOptional<FName> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  uVar2 = (this->field0_0x0).TypedValue.ComparisonIndex.Value;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = uVar2 != 0xffffffff;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(uVar2 != 0xffffffff);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14a28d966;
    }
    else {
      uVar2 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14a28d966:
      bVar7 = uVar2 != 0;
    }
    if (!bVar7) {
      return;
    }
LAB_14a28d96f:
    pcVar6 = *(code **)(*(longlong *)param_1 + 0x178);
    if (((this->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*pcVar6)(param_1,this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14a28d8ee;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14a28d8ee:
      if (uVar3 != 0) {
        if (uVar2 == 0xffffffff) {
          this->field0_0x0 = (TOptional<FName>_u_0)0x0;
        }
        goto LAB_14a28d96f;
      }
    }
    if ((this->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
      (this->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
      (this->field0_0x0).TypedValue.Number = 0;
    }
  }
  return;
}

// Emplace<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_> @ 14a2cfb70

TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
* __thiscall
TOptional<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
::
Emplace<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
          (TOptional<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
           *this,TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                 *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
  *pTVar4;
  
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
  pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
  if ((TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
       *)this != param_1) {
    *(undefined8 *)&this->field0_0x0 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 8) = *(undefined4 *)&param_1->field_0x8;
    _Dst = (undefined1 *)((longlong)&this->field0_0x0 + 0x10);
    *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (_Dst != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(_Dst,&param_1->field_0x10,0x10);
      }
      pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x20);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x38) = *(undefined4 *)&param_1->field_0x38;
  }
  pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
          *)this;
}

// operator= @ 14a2df7e0

TOptional<FString> * __thiscall
TOptional<FString>::operator=(TOptional<FString> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FString> *pTVar4;
  
  if (param_1 != (FString *)this) {
    pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this,param_1);
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

