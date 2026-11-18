// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 4

// AddIndexedPointer @ 148df3900

int __thiscall
FNiagaraShaderMapPointerTable::AddIndexedPointer
          (FNiagaraShaderMapPointerTable *this,FTypeLayoutDesc *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  UNiagaraDataInterfaceBase *local_res8;
  
  pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
           ::Do();
  if (param_1 != pFVar4) {
    iVar3 = FShaderMapPointerTable::AddIndexedPointer
                      ((FShaderMapPointerTable *)this,param_1,param_2);
    return iVar3;
  }
  local_res8 = param_2;
  if (param_2 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x3cb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = TArray<UNiagaraDataInterfaceBase_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UNiagaraDataInterfaceBase_*_const_&>
                    ((TArray<UNiagaraDataInterfaceBase_*,TSizedDefaultAllocator<32>_> *)
                     &(this->DITypes).field_0x20,&local_res8);
  return iVar3;
}

// GetIndexedPointer @ 148dff590

void * __thiscall
FNiagaraShaderMapPointerTable::GetIndexedPointer
          (FNiagaraShaderMapPointerTable *this,FTypeLayoutDesc *param_1,uint param_2)

{
  FTypeLayoutDesc *pFVar1;
  UNiagaraDataInterfaceBase *pUVar2;
  void *pvVar3;
  
  pFVar1 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
           ::Do();
  if (param_1 == pFVar1) {
    pUVar2 = TPtrTableBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::GetIndexedPointer
                       ((TPtrTableBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *)
                        &this->DITypes,param_2);
    return pUVar2;
  }
  pvVar3 = FShaderMapPointerTable::GetIndexedPointer((FShaderMapPointerTable *)this,param_1,param_2)
  ;
  return pvVar3;
}

// LoadFromArchive @ 148e0a390

bool __thiscall
FNiagaraShaderMapPointerTable::LoadFromArchive
          (FNiagaraShaderMapPointerTable *this,FArchive *param_1,
          FPlatformTypeLayoutParameters *param_2,void *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  UNiagaraDataInterfaceBase **ppUVar3;
  code *pcVar4;
  INiagaraShaderModule *this_00;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UNiagaraDataInterfaceBase *pUVar9;
  ForAnyElementType FVar10;
  undefined1 *puVar11;
  int iVar12;
  uint local_res8 [2];
  UNiagaraDataInterfaceBase *local_58;
  UNiagaraDataInterfaceBase *local_50;
  FString local_48;
  FString local_38;
  
  bVar5 = FShaderMapPointerTable::LoadFromArchive
                    ((FShaderMapPointerTable *)this,param_1,param_2,param_3);
  this_00 = INiagaraShaderModule::Singleton;
  plVar2 = *(longlong **)&param_1->field_0x8;
  iVar12 = 0;
  local_res8[0] = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar11 = &(this->DITypes).field_0x20;
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  puVar1 = &(this->DITypes).field_0x2c;
  *(undefined4 *)&(this->DITypes).field_0x28 = 0;
  if (*(int *)puVar1 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_res8[0],(ForAnyElementType *)puVar11,0,(int *)puVar1);
  }
  if (0 < (int)local_res8[0]) {
    do {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_48);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar10.Data = local_48.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_38,(wchar_t *)FVar10.Data);
      pUVar9 = INiagaraShaderModule::RequestDefaultDataInterface(this_00,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ppUVar3 = *(UNiagaraDataInterfaceBase ***)puVar11;
      local_58 = pUVar9;
      if (pUVar9 == (UNiagaraDataInterfaceBase *)0x0) {
        local_50 = pUVar9;
        if (((ppUVar3 <= &local_50) && (&local_50 < ppUVar3 + *(int *)puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = *(int *)&(this->DITypes).field_0x28;
        pUVar9 = local_50;
        if (iVar8 == *(int *)puVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)puVar11,(int *)puVar1);
          pUVar9 = local_50;
        }
      }
      else {
        if (((ppUVar3 <= &local_58) && (&local_58 < ppUVar3 + *(int *)puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = *(int *)&(this->DITypes).field_0x28;
        pUVar9 = local_58;
        if (iVar8 == *(int *)puVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)puVar11,(int *)puVar1);
          pUVar9 = local_58;
        }
      }
      *(int *)&(this->DITypes).field_0x28 = iVar8 + 1;
      *(UNiagaraDataInterfaceBase **)(*(longlong *)puVar11 + (longlong)iVar8 * 8) = pUVar9;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_res8[0]);
  }
  return bVar5;
}

// SaveToArchive @ 148e0cae0

void __thiscall
FNiagaraShaderMapPointerTable::SaveToArchive
          (FNiagaraShaderMapPointerTable *this,FArchive *param_1,
          FPlatformTypeLayoutParameters *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  FString local_18;
  
  FShaderMapPointerTable::SaveToArchive((FShaderMapPointerTable *)this,param_1,param_2,param_3);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = *(uint *)&(this->DITypes).field_0x28;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  uVar5 = 0;
  if (0 < (int)local_res8[0]) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&(this->DITypes).field_0x28) {
        uVar4 = ~uVar5 >> 0x1f;
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
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)
                  (*(longlong *)(lVar6 + *(longlong *)&(this->DITypes).field_0x20) + 0x10),&local_18
                 ,(UObject *)0x0,None);
      ::operator<<(param_1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (int)local_res8[0]);
  }
  return;
}

