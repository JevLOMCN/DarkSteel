// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 19

// AllocateEntryIndex @ 14a3e8d40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FAccumulatedControlEntryIndex __thiscall
UE::MovieScene::FAccumulatedControlRigValues::AllocateEntryIndex
          (FAccumulatedControlRigValues *this,UMovieSceneControlRigParameterTrack *param_1,
          FName param_2,EControlRigControlType param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined7 in_register_00000089;
  FName FVar8;
  FWeakObjectPtr local_res8;
  FObjectKey local_res18 [2];
  byte in_stack_00000028;
  FName local_38;
  
  FVar8._1_7_ = in_register_00000089;
  FVar8.ComparisonIndex.Value._0_1_ = param_3;
  local_res18[0].ObjectIndex = 0;
  local_res18[0].ObjectSerialNumber = 0;
  if (param_2 != (FName)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_38 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_38);
    local_res18[0].ObjectIndex = local_res8.ObjectIndex;
    local_res18[0].ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  puVar5 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)this,local_res18);
  if (puVar5 == (uint *)0x0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  }
  else {
    uVar1 = *puVar5;
    uVar7 = 0;
    if ((int)uVar1 < (this->ValuesArray).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return SUB86(uVar6,0);
      }
    }
    iVar4 = FControlRigParameterValueHeader::Add_GetIndex
                      ((FControlRigParameterValueHeader *)
                       ((this->ValuesArray).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 0x88 + (ulonglong)in_stack_00000028 * 0x10 + 8),FVar8)
    ;
    *(short *)&param_1->_padding_ = (short)*puVar5;
    *(short *)((longlong)&param_1->_padding_ + 2) = (short)iVar4;
    *(byte *)((longlong)&param_1->_padding_ + 4) = in_stack_00000028;
  }
  return SUB86(param_1,0);
}

// Apply @ 14a3ea500

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Apply(FAccumulatedControlRigValues *this)

{
  int iVar1;
  FControlRigParameterBuffer *this_00;
  FControlRigParameterBuffer *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ValuesArray).ArrayNum;
  this_00 = (FControlRigParameterBuffer *)(this->ValuesArray).AllocatorInstance.Data;
  pFVar2 = (FControlRigParameterBuffer *)((longlong)this_00 + (longlong)iVar1 * 0x88);
  while( true ) {
    if ((this->ValuesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FControlRigParameterBuffer::Apply(this_00);
    this_00 = (FControlRigParameterBuffer *)&this_00[1].Values.Headers[0].Capacity;
  }
  return;
}

// Compact @ 14a3f2a50

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Compact(FAccumulatedControlRigValues *this)

{
  TArray<UE::MovieScene::FAccumulatedControlRigValues::FEntry,TSizedDefaultAllocator<32>_> *this_00;
  UObject *pUVar1;
  code *pcVar2;
  FObjectKey FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  uVar10 = (ulonglong)this->NextValidIndex;
  iVar7 = (this->ValuesArray).ArrayNum;
  this_00 = &this->ValuesArray;
  if (this->NextValidIndex < iVar7) {
    lVar11 = uVar10 * 0x88;
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->ValuesArray).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      pUVar1 = *(UObject **)((this_00->AllocatorInstance).Data + lVar11 + 0x78);
      uVar6 = uVar5;
      if (pUVar1 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar1);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res18 = pUVar1;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar1);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
        local_res8.ObjectIndex = local_res10.ObjectIndex;
        local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
        FVar3 = local_res8;
        uVar5 = local_res10.ObjectIndex;
        local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
        uVar6 = local_res8.ObjectSerialNumber;
        local_res8 = FVar3;
      }
      if (*(int *)&(this->ParameterValuesByTrack).field_0x8 !=
          *(int *)&(this->ParameterValuesByTrack).field_0x34) {
        uVar12 = uVar5 - uVar6 ^ uVar6 >> 0xd;
        uVar5 = (-0x61c88647 - uVar12) - uVar6 ^ uVar12 << 8;
        uVar8 = (uVar6 - uVar5) - uVar12 ^ uVar5 >> 0xd;
        uVar12 = (uVar12 - uVar8) - uVar5 ^ uVar8 >> 0xc;
        uVar6 = (uVar5 - uVar8) - uVar12 ^ uVar12 << 0x10;
        uVar5 = (uVar8 - uVar6) - uVar12 ^ uVar6 >> 5;
        uVar8 = (uVar12 - uVar5) - uVar6 ^ uVar5 >> 3;
        uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 10;
        TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<FObjectKey>
                  ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
                    *)this,(uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xf,&local_res8);
      }
      iVar7 = (this->ValuesArray).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      lVar11 = lVar11 + 0x88;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  uVar6 = this->NextValidIndex;
  uVar9 = iVar7 - uVar6;
  if (((int)(uVar9 | uVar6) < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar9 != 0) {
    TArray<UE::MovieScene::FAccumulatedControlRigValues::FEntry,TSizedDefaultAllocator<32>_>::
    RemoveAtSwapImpl(this_00,uVar6,uVar9);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,&this_00->AllocatorInstance,(this->ValuesArray).ArrayNum,
               &(this->ValuesArray).ArrayMax);
  }
  return;
}

// DoesEntryExistForTrack @ 14a4038b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FAccumulatedControlRigValues::DoesEntryExistForTrack
          (FAccumulatedControlRigValues *this,UMovieSceneControlRigParameterTrack *param_1)

{
  int *piVar1;
  FWeakObjectPtr local_res8;
  UMovieSceneControlRigParameterTrack *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  piVar1 = TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
           ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   *)this,(FObjectKey *)&local_res8);
  return piVar1 != (int *)0x0;
}

// FindControlRig @ 14a40a920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
UE::MovieScene::FAccumulatedControlRigValues::FindControlRig
          (FAccumulatedControlRigValues *this,UMovieSceneControlRigParameterTrack *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  UControlRig *pUVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneControlRigParameterTrack *local_res18 [2];
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  puVar4 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)this,&local_res10);
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((int)uVar1 < (this->ValuesArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UControlRig *)(*pcVar2)();
        return pUVar5;
      }
    }
    pUVar5 = (UControlRig *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this->ValuesArray).AllocatorInstance.Data +
                                 (longlong)(int)uVar1 * 0x88));
    return pUVar5;
  }
  return (UControlRig *)0x0;
}

// FindControlRig @ 14a40aa10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall
UE::MovieScene::FAccumulatedControlRigValues::FindControlRig
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  UControlRig *pUVar4;
  undefined2 in_register_00000016;
  
  uVar1 = *(ushort *)CONCAT26(in_register_00000016,param_1);
  if ((uVar1 != 0xffff) && (((ushort *)CONCAT26(in_register_00000016,param_1))[1] != 0xffff)) {
    if ((this->ValuesArray).ArrayNum <= (int)(uint)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UControlRig *)(*pcVar2)();
        return pUVar4;
      }
    }
    pUVar4 = (UControlRig *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this->ValuesArray).AllocatorInstance.Data +
                                 (ulonglong)uVar1 * 0x88));
    return pUVar4;
  }
  return (UControlRig *)0x0;
}

// FindParameterBuffer @ 14a40ccc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigParameterBuffer * __thiscall
UE::MovieScene::FAccumulatedControlRigValues::FindParameterBuffer
          (FAccumulatedControlRigValues *this,UMovieSceneControlRigParameterTrack *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FControlRigParameterBuffer *pFVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneControlRigParameterTrack *local_res18 [2];
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  puVar4 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)this,&local_res10);
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((int)uVar1 < (this->ValuesArray).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FControlRigParameterBuffer *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FControlRigParameterBuffer *)
           ((this->ValuesArray).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  }
  return (FControlRigParameterBuffer *)0x0;
}

// GetData @ 14a413760

void * __thiscall
UE::MovieScene::FAccumulatedControlRigValues::GetData
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined2 in_register_00000016;
  
  uVar1 = *(ushort *)CONCAT26(in_register_00000016,param_1);
  if ((this->ValuesArray).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  pFVar2 = (this->ValuesArray).AllocatorInstance.Data;
  lVar6 = (ulonglong)uVar1 * 0x88 +
          (ulonglong)(byte)((ushort *)CONCAT26(in_register_00000016,param_1))[2] * 0x10;
  if (*(longlong *)(pFVar2 + lVar6 + 8) != 0) {
    return (void *)((ulonglong)*(ushort *)(pFVar2 + lVar6 + 0x10) * 8 + -1 +
                    (ulonglong)((byte)pFVar2[lVar6 + 0x14] & 0x7f) +
                    *(longlong *)(pFVar2 + lVar6 + 8) &
                   -(ulonglong)((byte)pFVar2[lVar6 + 0x14] & 0x7f));
  }
  return (void *)0x0;
}

// InitializeParameters @ 14a423200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::InitializeParameters
          (FAccumulatedControlRigValues *this,FPreAnimatedControlRigParameterStorage *param_1)

{
  int iVar1;
  UControlRig *pUVar2;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ValuesArray).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->ValuesArray).AllocatorInstance.Data;
  pFVar3 = this_00 + (longlong)iVar1 * 0x11;
  while( true ) {
    if ((this->ValuesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    pUVar2 = (UControlRig *)FWeakObjectPtr::Get(this_00);
    if (pUVar2 != (UControlRig *)0x0) {
      FControlRigParameterValues::InitializeParameters
                ((FControlRigParameterValues *)(this_00 + 1),pUVar2,param_1);
    }
    this_00 = this_00 + 0x11;
  }
  return;
}

// InitializeRig @ 14a423b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
UE::MovieScene::FAccumulatedControlRigValues::InitializeRig
          (FAccumulatedControlRigValues *this,UMovieSceneControlRigParameterTrack *param_1,
          UControlRig *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  FWeakObjectPtr *this_00;
  int local_res8 [2];
  TPairInitializer<FObjectKey_&&,int_const_&> local_res10;
  FWeakObjectPtr local_res20;
  FObjectKey local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  UMovieSceneControlRigParameterTrack *local_70;
  UControlRig *local_68;
  UControlRig *local_60;
  UMovieSceneControlRigParameterTrack *local_58;
  FWeakObjectPtr *local_50;
  int *local_48;
  
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneControlRigParameterTrack *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_70 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
    local_88.ObjectIndex = local_res20.ObjectIndex;
    local_88.ObjectSerialNumber = local_res20.ObjectSerialNumber;
  }
  puVar7 = (uint *)TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                   ::Find((TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
                           *)this,&local_88);
  if (puVar7 != (uint *)0x0) {
    MarkAsActive(this,*puVar7);
    uVar2 = *puVar7;
    uVar8 = 0;
    if ((int)uVar2 < (this->ValuesArray).ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar3 = (this->ValuesArray).AllocatorInstance.Data;
    local_68 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UControlRig *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(pFVar3 + (longlong)(int)uVar2 * 0x88),(FObjectPtr)&local_68);
    return *puVar7;
  }
  iVar6 = (this->ValuesArray).ArrayNum;
  piVar1 = &(this->ValuesArray).ArrayMax;
  local_res8[0] = iVar6;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&(this->ValuesArray).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->ValuesArray).AllocatorInstance.Data;
  (this->ValuesArray).ArrayNum = iVar6 + 1;
  this_00 = (FWeakObjectPtr *)(pFVar3 + (longlong)iVar6 * 0x88);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_60 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_60);
  FControlRigParameterValues::FControlRigParameterValues
            ((FControlRigParameterValues *)(this_00 + 1),Stable);
  this_00[0xf] = (FWeakObjectPtr)param_1;
  if ((GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (UMovieSceneControlRigParameterTrack *)0x0)) {
    *(undefined1 *)&this_00[0x10].ObjectIndex = 0;
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    if (param_1 == (UMovieSceneControlRigParameterTrack *)0x0) goto LAB_14a423d75;
  }
  else {
    GC::MarkAsReachable((UObject *)param_1);
    *(undefined1 *)&this_00[0x10].ObjectIndex = 0;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_58);
  local_78 = local_80;
LAB_14a423d75:
  local_50 = &local_78;
  local_48 = local_res8;
  TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FObjectKey_&&,int_const_&>_>
            ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_50);
  MarkAsActive(this,local_res8[0]);
  return local_res8[0];
}

// MarkAsActive @ 14a42c940

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::MarkAsActive
          (FAccumulatedControlRigValues *this,int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  TPairInitializer<FObjectKey_&&,int_const_&> local_res8;
  TPairInitializer<FObjectKey_&&,int_const_&> local_res18;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  FWeakObjectPtr local_c8;
  UObject *local_c0;
  UObject *local_b8;
  FWeakObjectPtr *local_b0;
  int **local_a8;
  FWeakObjectPtr *local_a0;
  int *local_98;
  
  uVar24 = 0;
  if (param_1 < (this->ValuesArray).ArrayNum) {
    uVar24 = (uint)~param_1 >> 0x1f;
  }
  local_res8.Value._0_4_ = param_1;
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar27 = (this->ValuesArray).AllocatorInstance.Data;
  if (pFVar27[(longlong)param_1 * 0x88 + 0x80] != (FScriptContainerElement)0x0) {
    return;
  }
  piVar1 = &this->NextValidIndex;
  if (((int)(uint)local_res8.Value < this->NextValidIndex) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= NextValidIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                          ,0x31b,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar27[(longlong)param_1 * 0x88 + 0x80] = (FScriptContainerElement)0x1;
  uVar24 = *piVar1;
  if ((uint)local_res8.Value == uVar24) {
    *piVar1 = uVar24 + 1;
    return;
  }
  uVar23 = 0;
  if ((int)uVar24 < (this->ValuesArray).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = *(UObject **)
            ((this->ValuesArray).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x88 + 0x78);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    if (pUVar3 != (UObject *)0x0) goto LAB_14a42cac2;
  }
  else {
    GC::MarkAsReachable(pUVar3);
LAB_14a42cac2:
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar3);
    }
    local_res18.Value = (int *)0x0;
    local_c0 = pUVar3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_c0);
    local_d8 = (FWeakObjectPtr)local_res18.Value;
  }
  local_b0 = &local_d8;
  local_a8 = &local_res8.Value;
  TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FObjectKey_&&,int_const_&>_>
            ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_b0);
  lVar26 = (longlong)(int)(uint)local_res8.Value;
  uVar23 = 0;
  uVar24 = uVar23;
  if ((int)(uint)local_res8.Value < (this->ValuesArray).ArrayNum) {
    uVar24 = ~(uint)local_res8.Value >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = *(UObject **)((this->ValuesArray).AllocatorInstance.Data + lVar26 * 0x88 + 0x78);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    if (pUVar3 == (UObject *)0x0) goto LAB_14a42cbe1;
  }
  else {
    GC::MarkAsReachable(pUVar3);
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar3);
  }
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_b8 = pUVar3;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_b8);
  local_c8 = local_d0;
LAB_14a42cbe1:
  local_a0 = &local_c8;
  local_98 = piVar1;
  TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FObjectKey_&&,int_const_&>_>
            ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
              *)this,&local_res18,(bool *)&local_a0);
  lVar26 = (longlong)(int)(uint)local_res8.Value;
  uVar24 = uVar23;
  if ((int)(uint)local_res8.Value < (this->ValuesArray).ArrayNum) {
    uVar24 = ~(uint)local_res8.Value >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar24 = *piVar1;
  pFVar27 = (this->ValuesArray).AllocatorInstance.Data + lVar26 * 0x88;
  if ((int)uVar24 < (this->ValuesArray).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = *(undefined8 *)(pFVar27 + 8);
  pFVar25 = (this->ValuesArray).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x88;
  uVar6 = *(undefined8 *)(pFVar25 + 0x30);
  uVar7 = *(undefined8 *)(pFVar25 + 0x38);
  uVar8 = *(undefined8 *)(pFVar25 + 0x40);
  uVar9 = *(undefined8 *)(pFVar25 + 0x48);
  uVar10 = *(undefined8 *)(pFVar25 + 0x50);
  uVar11 = *(undefined8 *)(pFVar25 + 0x58);
  uVar12 = *(undefined8 *)(pFVar25 + 0x60);
  uVar13 = *(undefined8 *)(pFVar25 + 0x68);
  uVar14 = *(undefined8 *)(pFVar25 + 0x70);
  uVar15 = *(undefined8 *)(pFVar25 + 0x78);
  uVar16 = *(undefined8 *)pFVar25;
  uVar17 = *(undefined8 *)(pFVar25 + 8);
  uVar18 = *(undefined8 *)(pFVar25 + 0x10);
  uVar19 = *(undefined8 *)(pFVar25 + 0x18);
  uVar20 = *(undefined8 *)(pFVar25 + 0x20);
  uVar21 = *(undefined8 *)(pFVar25 + 0x28);
  uVar2 = *(undefined8 *)(pFVar25 + 0x80);
  *(undefined8 *)pFVar25 = *(undefined8 *)pFVar27;
  *(undefined8 *)(pFVar25 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x18);
  *(undefined8 *)(pFVar25 + 0x10) = *(undefined8 *)(pFVar27 + 0x10);
  *(undefined8 *)(pFVar25 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x28);
  *(undefined8 *)(pFVar25 + 0x20) = *(undefined8 *)(pFVar27 + 0x20);
  *(undefined8 *)(pFVar25 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x38);
  *(undefined8 *)(pFVar25 + 0x30) = *(undefined8 *)(pFVar27 + 0x30);
  *(undefined8 *)(pFVar25 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x48);
  *(undefined8 *)(pFVar25 + 0x40) = *(undefined8 *)(pFVar27 + 0x40);
  *(undefined8 *)(pFVar25 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x58);
  *(undefined8 *)(pFVar25 + 0x50) = *(undefined8 *)(pFVar27 + 0x50);
  *(undefined8 *)(pFVar25 + 0x58) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x68);
  *(undefined8 *)(pFVar25 + 0x60) = *(undefined8 *)(pFVar27 + 0x60);
  *(undefined8 *)(pFVar25 + 0x68) = uVar5;
  uVar5 = *(undefined8 *)(pFVar27 + 0x78);
  *(undefined8 *)(pFVar25 + 0x70) = *(undefined8 *)(pFVar27 + 0x70);
  *(undefined8 *)(pFVar25 + 0x78) = uVar5;
  *(undefined8 *)(pFVar25 + 0x80) = *(undefined8 *)(pFVar27 + 0x80);
  *(undefined8 *)pFVar27 = uVar16;
  *(undefined8 *)(pFVar27 + 8) = uVar17;
  *(undefined8 *)(pFVar27 + 0x10) = uVar18;
  *(undefined8 *)(pFVar27 + 0x18) = uVar19;
  *(undefined8 *)(pFVar27 + 0x20) = uVar20;
  *(undefined8 *)(pFVar27 + 0x28) = uVar21;
  *(undefined8 *)(pFVar27 + 0x30) = uVar6;
  *(undefined8 *)(pFVar27 + 0x38) = uVar7;
  *(undefined8 *)(pFVar27 + 0x40) = uVar8;
  *(undefined8 *)(pFVar27 + 0x48) = uVar9;
  *(undefined8 *)(pFVar27 + 0x50) = uVar10;
  *(undefined8 *)(pFVar27 + 0x58) = uVar11;
  *(undefined8 *)(pFVar27 + 0x60) = uVar12;
  *(undefined8 *)(pFVar27 + 0x68) = uVar13;
  *(undefined8 *)(pFVar27 + 0x70) = uVar14;
  *(undefined8 *)(pFVar27 + 0x78) = uVar15;
  *(undefined8 *)(pFVar27 + 0x80) = uVar2;
  *piVar1 = *piVar1 + 1;
  return;
}

// PrimeForInstantiation @ 14a435730

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::PrimeForInstantiation
          (FAccumulatedControlRigValues *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->NextValidIndex = 0;
  pFVar5 = (this->ValuesArray).AllocatorInstance.Data;
  iVar1 = (this->ValuesArray).ArrayNum;
  pFVar3 = pFVar5 + 0x78;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->ValuesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar3[8] = (FScriptContainerElement)0x0;
    for (pFVar2 = pFVar3 + -0x70; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0x10) {
      *(undefined2 *)(pFVar2 + 10) = 0;
    }
    pFVar5 = pFVar5 + 0x88;
    pFVar3 = pFVar3 + 0x88;
  }
  return;
}

// Store @ 14a45c410

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,uchar param_2)

{
  void *pvVar1;
  undefined2 in_register_00000016;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  puVar2 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18 = *puVar2;
  local_14 = *(undefined2 *)(puVar2 + 1);
  pvVar1 = GetData(this,SUB86(&local_18,0));
  *(uchar *)((longlong)pvVar1 + (ulonglong)*(ushort *)((longlong)puVar2 + 2)) = param_2;
  return;
}

// Store @ 14a45c460

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,int param_2)

{
  void *pvVar1;
  undefined2 in_register_00000016;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  puVar2 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18 = *puVar2;
  local_14 = *(undefined2 *)(puVar2 + 1);
  pvVar1 = GetData(this,SUB86(&local_18,0));
  *(int *)((longlong)pvVar1 + (ulonglong)*(ushort *)((longlong)puVar2 + 2) * 4) = param_2;
  return;
}

// Store @ 14a45c4b0

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,float param_2)

{
  void *pvVar1;
  undefined2 in_register_00000016;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined2 local_24;
  
  puVar2 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_28 = *puVar2;
  local_24 = *(undefined2 *)(puVar2 + 1);
  pvVar1 = GetData(this,SUB86(&local_28,0));
  *(float *)((longlong)pvVar1 + (ulonglong)*(ushort *)((longlong)puVar2 + 2) * 4) = param_2;
  return;
}

// Store @ 14a45c500

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,
          TVector<float> *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  void *pvVar3;
  undefined2 in_register_00000016;
  undefined4 *puVar4;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  puVar4 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_res18 = *puVar4;
  local_res1c = *(undefined2 *)(puVar4 + 1);
  pvVar3 = GetData(this,SUB86(&local_res18,0));
  puVar1 = (undefined8 *)((longlong)pvVar3 + (ulonglong)*(ushort *)((longlong)puVar4 + 2) * 0xc);
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  *puVar1 = *(undefined8 *)&param_2->field0_0x0;
  *(float *)(puVar1 + 1) = fVar2;
  return;
}

// Store @ 14a45c560

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,
          FEulerTransform *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined2 in_register_00000016;
  undefined4 *puVar8;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  puVar8 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_res18 = *puVar8;
  local_res1c = *(undefined2 *)(puVar8 + 1);
  pvVar6 = GetData(this,SUB86(&local_res18,0));
  uVar7 = (ulonglong)*(ushort *)((longlong)puVar8 + 2);
  dVar2 = (param_2->Location).field0_0x0._s_0.Y;
  dVar3 = (param_2->Location).field0_0x0._s_0.Z;
  dVar4 = (param_2->Rotation).Pitch;
  pdVar1 = (double *)((longlong)pvVar6 + uVar7 * 0x48);
  *pdVar1 = (param_2->Location).field0_0x0._s_0.X;
  pdVar1[1] = dVar2;
  dVar2 = (param_2->Rotation).Yaw;
  dVar5 = (param_2->Rotation).Roll;
  pdVar1 = (double *)((longlong)pvVar6 + uVar7 * 0x48 + 0x10);
  *pdVar1 = dVar3;
  pdVar1[1] = dVar4;
  dVar3 = (param_2->Scale).field0_0x0._s_0.X;
  dVar4 = (param_2->Scale).field0_0x0._s_0.Y;
  pdVar1 = (double *)((longlong)pvVar6 + uVar7 * 0x48 + 0x20);
  *pdVar1 = dVar2;
  pdVar1[1] = dVar5;
  dVar2 = (param_2->Scale).field0_0x0._s_0.Z;
  pdVar1 = (double *)((longlong)pvVar6 + uVar7 * 0x48 + 0x30);
  *pdVar1 = dVar3;
  pdVar1[1] = dVar4;
  *(double *)((longlong)pvVar6 + uVar7 * 0x48 + 0x40) = dVar2;
  return;
}

// Store @ 14a45c5d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,
          FMovieSceneControlRigSpaceBaseKey *param_2)

{
  undefined8 *puVar1;
  FName FVar2;
  void *pvVar3;
  undefined2 in_register_00000016;
  undefined4 *puVar4;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  puVar4 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_res18 = *puVar4;
  local_res1c = *(undefined2 *)(puVar4 + 1);
  pvVar3 = GetData(this,SUB86(&local_res18,0));
  FVar2 = (param_2->ControlRigElement).Name;
  puVar1 = (undefined8 *)((longlong)pvVar3 + (ulonglong)*(ushort *)((longlong)puVar4 + 2) * 0x10);
  *puVar1 = *(undefined8 *)param_2;
  *(FName *)(puVar1 + 1) = FVar2;
  return;
}

// Store @ 14a45c620

void __thiscall
UE::MovieScene::FAccumulatedControlRigValues::Store
          (FAccumulatedControlRigValues *this,FAccumulatedControlEntryIndex param_1,bool param_2)

{
  void *pvVar1;
  undefined2 in_register_00000016;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  puVar2 = (undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18 = *puVar2;
  local_14 = *(undefined2 *)(puVar2 + 1);
  pvVar1 = GetData(this,SUB86(&local_18,0));
  *(bool *)((longlong)pvVar1 + (ulonglong)*(ushort *)((longlong)puVar2 + 2)) = param_2;
  return;
}

