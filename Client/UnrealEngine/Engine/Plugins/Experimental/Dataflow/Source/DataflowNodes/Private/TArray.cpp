// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 4

// AddUniqueImpl<UE::Dataflow::FRenderingParameter_const_&> @ 14dac6ac0

int __thiscall
TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Dataflow::FRenderingParameter_const_&>
          (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *this,
          FRenderingParameter *param_1)

{
  FRenderingParameter *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FRenderingParameter *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    UE::Dataflow::FRenderingParameter::FRenderingParameter
              ((FRenderingParameter *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x30),
               param_1);
  }
  return iVar4;
}

// operator= @ 14dace440

TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<USkeletalMesh> *)pFVar2,iVar1);
  }
  return this;
}

// BulkSerialize @ 14dacfa40

void __thiscall
TArray<short,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<short,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,bool param_2)

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
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 2;
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
    TArrayPrivateFriend::Serialize<short,TSizedDefaultAllocator<32>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum * 2,(longlong)*piVar1 * 2);
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
LAB_14dacfc62:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 * 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 2) {
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
      if (local_res18[0] < 0x40000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_14dacfc62;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// Find @ 14dad4dc0

int __thiscall
TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *this,
          FRenderingParameter *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  do {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x30) {
      return -1;
    }
    iVar4 = *(int *)(pFVar5 + 8);
    iVar2 = (param_1->Name).Data.ArrayNum;
    if (iVar4 == iVar2) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar5,
                           (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
        goto LAB_14dad4e14;
      }
LAB_14dad4e1b:
      if ((((*(FName *)(pFVar5 + 0x10) == param_1->Type) &&
           (*(int *)(pFVar5 + 0x20) == (param_1->Outputs).ArrayNum)) &&
          (bVar6 = CompareItems<FName,int>
                             (*(FName **)(pFVar5 + 0x18),
                              (FName *)(param_1->Outputs).AllocatorInstance.Data,
                              *(int *)(pFVar5 + 0x20)), bVar6)) &&
         (*(FName *)(pFVar5 + 0x28) == param_1->ViewMode)) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x30);
      }
    }
    else {
      bVar6 = iVar4 + iVar2 == 1;
LAB_14dad4e14:
      if (bVar6) goto LAB_14dad4e1b;
    }
    pFVar5 = pFVar5 + 0x30;
  } while( true );
}

