// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// GetOrCreateObject @ 14944a890

UObject * __thiscall
FNiagaraSimpleObjectPool::GetOrCreateObject
          (FNiagaraSimpleObjectPool *this,UClass *param_1,UObject *param_2,bool *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ForAnyElementType *pFVar8;
  int iVar9;
  FWeakObjectPtr local_res10;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimpleObjectPool.h"
                         ,0x11,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar2)();
    return pUVar5;
  }
  if ((param_1 == (UClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimpleObjectPool.h"
                         ,0x12,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar2)();
    return pUVar5;
  }
  lVar1 = param_1->_padding_;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->ObjectPools).field_0x8 != *(int *)&(this->ObjectPools).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectPools).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectPools).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ObjectPools).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar4) * 4);
    if (iVar9 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)&this->ObjectPools);
        if (*plVar6 == lVar1) {
          pFVar8 = (ForAnyElementType *)(plVar6 + 1);
          if (plVar6 == (longlong *)0x0) {
            pFVar8 = (ForAnyElementType *)0x0;
          }
          if ((pFVar8 != (ForAnyElementType *)0x0) && (0 < *(int *)&pFVar8[1].Data)) {
            do {
              local_res10 = *(FWeakObjectPtr *)
                             (pFVar8->Data + (longlong)*(int *)&pFVar8[1].Data * 8 + -8);
              iVar9 = *(int *)&pFVar8[1].Data + -1;
              *(int *)&pFVar8[1].Data = iVar9;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar8,iVar9,(int *)((longlong)&pFVar8[1].Data + 4));
              pUVar5 = FWeakObjectPtr::Get(&local_res10);
              if (pUVar5 != (UObject *)0x0) {
                *param_3 = true;
                return pUVar5;
              }
            } while (0 < *(int *)&pFVar8[1].Data);
          }
          break;
        }
        iVar9 = (int)plVar6[3];
      } while (iVar9 != -1);
    }
  }
  *param_3 = false;
  pUVar5 = NewObject<UObject>(param_2,param_1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return pUVar5;
}

// ReturnObject @ 149464260

void __thiscall
FNiagaraSimpleObjectPool::ReturnObject(FNiagaraSimpleObjectPool *this,UObject *param_1)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_28 [2];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimpleObjectPool.h"
                         ,0x27,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("::IsValid(Obj)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimpleObjectPool.h"
                         ,0x28,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)&param_1->field_0x10 + 0x18);
  local_res10 = lVar2;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  if (*(int *)&(this->ObjectPools).field_0x8 != *(int *)&(this->ObjectPools).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectPools).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectPools).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->ObjectPools).field_0x48 - 1U & uVar5) * 4)
    ;
    if (iVar6 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this->ObjectPools);
        if (*plVar8 == local_res10) {
          if (plVar8 != (longlong *)0x0) goto LAB_149464393;
          break;
        }
        iVar6 = (int)plVar8[3];
      } while (iVar6 != -1);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar5,
             (bool *)&local_res18);
  plVar8 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this->ObjectPools);
LAB_149464393:
  pFVar1 = (ForAnyElementType *)(plVar8 + 1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28[0].ObjectIndex = 0;
  local_28[0].ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_28,(FObjectPtr)&local_res20);
  if ((((FWeakObjectPtr *)pFVar1->Data <= local_28) &&
      (local_28 < (FWeakObjectPtr *)pFVar1->Data + *(int *)((longlong)plVar8 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)plVar8[2];
  if (iVar6 == *(int *)((longlong)plVar8 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar1,(int *)((longlong)plVar8 + 0x14));
  }
  *(int *)(plVar8 + 2) = iVar6 + 1;
  *(FWeakObjectPtr *)(pFVar1->Data + (longlong)iVar6 * 8) = local_28[0];
  return;
}

