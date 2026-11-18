// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 11

// BulkSerialize @ 14a8440f0

void __thiscall
TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_> *this,
          FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 8;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::
    Serialize<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 3,(longlong)*piVar1 << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_14a84431a:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 << 3);
      return;
    }
  }
  else {
    if (local_res10[0] == 8) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x10000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (8,1,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (8,1,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_14a84431a;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 14a844370

void __thiscall
TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char *pcVar6;
  longlong lVar7;
  atomic<unsigned_char> *paVar8;
  ForAnyElementType FVar9;
  int iVar10;
  code *pcVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x18;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*piVar2 * 0x18,(longlong)this->ArrayMax * 0x18);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res10[0] == 0x18) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if (local_res18[0] < 0x5555556) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x18,8,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x18,8,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
        lVar7 = (longlong)(int)local_res18[0];
        goto LAB_14a844517;
      }
      pcVar6 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar8 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar6 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar8 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar6);
    if (!bVar5) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    return;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = *piVar2;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
    pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
    lVar7 = (longlong)(int)local_res20[0];
  }
LAB_14a844517:
  FVar9 = this->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  (*pcVar11)(param_1,FVar9,lVar7 * 0x18);
  return;
}

// Empty @ 14a847ee0

void __thiscall
TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>::Empty
          (TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a847f30

void __thiscall
TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>::Empty
          (TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14a852b20

void __thiscall
TArray<FWN_ISKM_LodInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FWN_ISKM_LodInfo,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FWN_ISKM_LodInfo *_Dst;
  
  _Dst = (FWN_ISKM_LodInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FWN_ISKM_LodInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a852ba0

void __thiscall
TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<FWN_ISKM_MeshRenderData,1> *_Dst;
  
  _Dst = (TSharedPtr<FWN_ISKM_MeshRenderData,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14a852c20

void __thiscall
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  pvVar2 = *(void **)_Dst;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x10,(longlong)iVar3 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14a852cb0

void __thiscall
TArray<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  pvVar2 = *(void **)_Dst;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x10,(longlong)iVar3 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14a854050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x30,(longlong)iVar4 * 0x30);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a854190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FWN_ISKM_InstanceData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x80,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x80;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x80,(longlong)iVar5 << 7);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a8542e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FWN_ISKM_LodFragment,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FWN_ISKM_LodFragment,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FWN_ISKM_LodFragment,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

