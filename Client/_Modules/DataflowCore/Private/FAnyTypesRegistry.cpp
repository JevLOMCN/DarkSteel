// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// AreTypesCompatible @ 144437940

bool __thiscall
UE::Dataflow::FAnyTypesRegistry::AreTypesCompatible
          (FAnyTypesRegistry *this,FName param_1,FName param_2)

{
  bool bVar1;
  FTypeInfo *pFVar2;
  
  if (param_1 == param_2) {
    return true;
  }
  pFVar2 = TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
           ::Find((TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
                   *)this,param_1);
  if (((pFVar2 != (FTypeInfo *)0x0) &&
      (pFVar2->SupportTypeFunction != (_func___cdecl_bool_FName *)0x0)) &&
     (bVar1 = (*pFVar2->SupportTypeFunction)(param_2), bVar1)) {
    return true;
  }
  pFVar2 = TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
           ::Find((TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
                   *)this,param_2);
  if ((pFVar2 != (FTypeInfo *)0x0) &&
     (pFVar2->SupportTypeFunction != (_func___cdecl_bool_FName *)0x0)) {
    bVar1 = (*pFVar2->SupportTypeFunction)(param_1);
    return bVar1;
  }
  return false;
}

// AreTypesCompatibleStatic @ 1444379e0

bool __cdecl UE::Dataflow::FAnyTypesRegistry::AreTypesCompatibleStatic(FName param_1,FName param_2)

{
  bool bVar1;
  FAnyTypesRegistry *this;
  
  this = GetInstance();
  bVar1 = AreTypesCompatible(this,param_1,param_2);
  return bVar1;
}

// GetAutoConvertNodeType @ 14444a670

FName __thiscall
UE::Dataflow::FAnyTypesRegistry::GetAutoConvertNodeType
          (FAnyTypesRegistry *this,FName param_1,FName param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  FName FVar5;
  FName FVar6;
  FName *pFVar7;
  FName in_R9;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FName local_38 [2];
  
  iVar1 = (this->AutoConvertNodes).ArrayNum;
  pFVar7 = (FName *)(this->AutoConvertNodes).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 10;
  while( true ) {
    if ((this->AutoConvertNodes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (pFVar7[4] == (FName)0x0) {
LAB_14444a70b:
      bVar3 = AreTypesCompatible(this,param_2,*pFVar7);
      if (bVar3) {
        bVar3 = AreTypesCompatible(this,in_R9,pFVar7[1]);
        if (bVar3) {
          FVar5 = pFVar7[2];
LAB_14444a741:
          *(FName *)param_1 = FVar5;
          return param_1;
        }
      }
    }
    else {
      local_38[0] = param_2;
      Core::Private::Function::CheckCallable((void *)pFVar7[4]);
      FVar5 = pFVar7[4];
      FVar6 = (FName)(pFVar7 + 6);
      if (pFVar7[9] != (FName)0x0) {
        FVar6 = pFVar7[9];
      }
      uVar4 = (**(code **)(*(longlong *)FVar6 + 8))();
      cVar2 = (*(code *)FVar5)(uVar4,local_38,local_res8);
      if (cVar2 != '\0') goto LAB_14444a70b;
    }
    pFVar7 = pFVar7 + 10;
  }
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  goto LAB_14444a741;
}

// GetAutoConvertNodeTypeStatic @ 14444a770

FName __cdecl
UE::Dataflow::FAnyTypesRegistry::GetAutoConvertNodeTypeStatic(FName param_1,FName param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  FAnyTypesRegistry *this;
  undefined8 uVar4;
  FName FVar5;
  FName FVar6;
  FName *pFVar7;
  FName in_R8;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FName local_res20;
  
  this = GetInstance();
  iVar1 = (this->AutoConvertNodes).ArrayNum;
  pFVar7 = (FName *)(this->AutoConvertNodes).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 10;
  while( true ) {
    if ((this->AutoConvertNodes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (pFVar7[4] == (FName)0x0) {
LAB_14444a809:
      bVar3 = AreTypesCompatible(this,param_2,*pFVar7);
      if (bVar3) {
        bVar3 = AreTypesCompatible(this,in_R8,pFVar7[1]);
        if (bVar3) {
          FVar5 = pFVar7[2];
LAB_14444a83f:
          *(FName *)param_1 = FVar5;
          return param_1;
        }
      }
    }
    else {
      local_res20 = param_2;
      Core::Private::Function::CheckCallable((void *)pFVar7[4]);
      FVar5 = pFVar7[4];
      FVar6 = (FName)(pFVar7 + 6);
      if (pFVar7[9] != (FName)0x0) {
        FVar6 = pFVar7[9];
      }
      uVar4 = (**(code **)(*(longlong *)FVar6 + 8))();
      cVar2 = (*(code *)FVar5)(uVar4,&local_res20,local_res8);
      if (cVar2 != '\0') goto LAB_14444a809;
    }
    pFVar7 = pFVar7 + 10;
  }
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  goto LAB_14444a83f;
}

// GetInstance @ 14444b730

FAnyTypesRegistry * __cdecl UE::Dataflow::FAnyTypesRegistry::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Dataflow::FAnyTypesRegistry::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetStorageType @ 14444e110

FName __thiscall
UE::Dataflow::FAnyTypesRegistry::GetStorageType(FAnyTypesRegistry *this,FName param_1)

{
  FTypeInfo *pFVar1;
  FName in_R8;
  
  pFVar1 = TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
           ::Find((TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
                   *)this,in_R8);
  if (pFVar1 != (FTypeInfo *)0x0) {
    *(FName *)param_1 = pFVar1->StorageType;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// GetStorageTypeStatic @ 14444e150

FName __cdecl UE::Dataflow::FAnyTypesRegistry::GetStorageTypeStatic(FName param_1)

{
  FAnyTypesRegistry *this;
  FTypeInfo *pFVar1;
  FName in_RDX;
  
  this = GetInstance();
  pFVar1 = TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
           ::Find((TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
                   *)this,in_RDX);
  if (pFVar1 != (FTypeInfo *)0x0) {
    *(FName *)param_1 = pFVar1->StorageType;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// IsAnyType @ 144450bb0

bool __thiscall UE::Dataflow::FAnyTypesRegistry::IsAnyType(FAnyTypesRegistry *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->TypeInfosByName).field_0x8 != *(int *)&(this->TypeInfosByName).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TypeInfosByName).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TypeInfosByName).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->TypeInfosByName).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)((longlong)iVar2 * 0x20 + *(longlong *)&this->TypeInfosByName) == param_1)
        goto LAB_144450c1b;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->TypeInfosByName);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_144450c1b:
  return iVar2 != -1;
}

// IsAnyTypeStatic @ 144450cd0

bool __cdecl UE::Dataflow::FAnyTypesRegistry::IsAnyTypeStatic(FName param_1)

{
  uint uVar1;
  int iVar2;
  FAnyTypesRegistry *pFVar3;
  undefined1 *puVar4;
  
  pFVar3 = GetInstance();
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(pFVar3->TypeInfosByName).field_0x8 != *(int *)&(pFVar3->TypeInfosByName).field_0x34)
  {
    puVar4 = *(undefined1 **)&(pFVar3->TypeInfosByName).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(pFVar3->TypeInfosByName).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(pFVar3->TypeInfosByName).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)((longlong)iVar2 * 0x20 + *(longlong *)&pFVar3->TypeInfosByName) == param_1)
        goto LAB_144450d3e;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&pFVar3->TypeInfosByName);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_144450d3e:
  return iVar2 != -1;
}

// RegisterAutoConvertNodeType @ 144454460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001444545da) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001444545de */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UE::Dataflow::FAnyTypesRegistry::RegisterAutoConvertNodeType
          (FAnyTypesRegistry *this,FName param_1,FName param_2,FName param_3,
          TFunction<bool___cdecl(FName,FName)> *param_4)

{
  TArray<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FName *pFVar9;
  undefined1 auStack_b8 [32];
  FName *local_98;
  FName *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_48;
  FNameEntryId local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FName local_28;
  FName local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = &this->AutoConvertNodes;
  local_48.ComparisonIndex.Value = *(uint *)&param_4->field_0x0;
  local_48.Number = *(uint *)&param_4->field_0x4;
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  if (local_48 != (FName)0x0) {
    puVar6 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_38);
  }
  pFVar9 = (FName *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar9 <= &local_68) &&
     (lVar8 = (longlong)(this->AutoConvertNodes).ArrayMax, &local_68 < pFVar9 + lVar8 * 10)) {
    local_80 = (longlong)(this->AutoConvertNodes).ArrayNum;
    local_78 = 0x50;
    local_98 = &local_68;
    local_90 = pFVar9;
    local_88 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AutoConvertNodes).ArrayNum;
  piVar2 = &(this->AutoConvertNodes).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AutoConvertNodes).ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
  *pFVar9 = local_68;
  pFVar9[1] = local_60;
  pFVar9[2] = local_58;
  pFVar9[4] = local_48;
  pFVar9[9] = local_20;
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  pFVar9[6].ComparisonIndex.Value = local_38.Value;
  pFVar9[6].Number = uStack_34;
  pFVar9[7].ComparisonIndex.Value = uStack_30;
  pFVar9[7].Number = uStack_2c;
  pFVar9[8] = local_28;
  if ((pFVar9[4] == (FName)0x0) && (local_48 != (FName)0x0)) {
    (**(code **)(CONCAT44(uStack_34,local_38.Value) + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar7 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// RegisterAutoConvertNodeTypeStatic @ 144454630

void __cdecl
UE::Dataflow::FAnyTypesRegistry::RegisterAutoConvertNodeTypeStatic
          (FName param_1,FName param_2,FName param_3,TFunction<bool___cdecl(FName,FName)> *param_4)

{
  FAnyTypesRegistry *this;
  undefined8 *puVar1;
  longlong *plVar2;
  TFunction<bool___cdecl(FName,FName)> local_58;
  
  this = GetInstance();
  local_58._0_8_ = *(undefined8 *)param_4;
  local_58._40_8_ = 0;
  if (local_58._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_58.field_0x10);
  }
  RegisterAutoConvertNodeType(this,param_1,param_2,param_3,&local_58);
  if (*(longlong *)param_4 != 0) {
    plVar2 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

