// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 22

// AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_> @ 14e521810

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EBlendMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e5218e0;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e5218e0:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4EBlendMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e521b90;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e521b90:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4EBlendMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_> @ 14e521df0

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_EMaterialShadingModel>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e521ec0;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e521ec0:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4EMaterialShadingModel_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e522170;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e522170:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4EMaterialShadingModel_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_> @ 14e5223d0

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ERefractionMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e5224a0;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e5224a0:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4ERefractionMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e522750;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e522750:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4ERefractionMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_> @ 14e5229b0

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_ETranslucencyLightingMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e522a80;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e522a80:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4ETranslucencyLightingMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e522d30;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e522d30:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4ETranslucencyLightingMode_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_> @ 14e522f90

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<TEnumAsByte<enum_TextureAddress>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e523060;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e523060:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4TextureAddress_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e523310;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e523310:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_V__TEnumAsByte_W4TextureAddress_____UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// AddApplyAndFillDelegates<enum_ELightUnits> @ 14e523570

void __thiscall
UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<enum_ELightUnits>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UClass *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  UClass *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FName local_f8;
  UInterchangeFactoryBaseNode *local_f0;
  FString local_e8;
  FName local_d8;
  UInterchangeFactoryBaseNode *local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar11 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_2;
  if (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->ApplyCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ApplyCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ApplyCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ApplyCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->ApplyCustomAttributeDelegates);
        if ((UClass *)*plVar9 == param_2) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e523640;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ApplyCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e523640:
  ::FString::FString(&local_108,param_1);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  local_f8 = param_3;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____AddApplyAndFillDelegates_W4ELightUnits___UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_108);
    *(FName *)(puVar6 + 5) = local_f8;
    puVar6[6] = local_f0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_c8);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_130.DelegateAllocator;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_130.DelegateSize;
  local_130.DelegateSize = 0;
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_b0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  uVar11 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->FillCustomAttributeDelegates).field_0x8 !=
      *(int *)&(this->FillCustomAttributeDelegates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FillCustomAttributeDelegates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FillCustomAttributeDelegates).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FillCustomAttributeDelegates).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->FillCustomAttributeDelegates);
        if ((UClass *)*plVar9 == local_res18) {
          if (plVar9 != (longlong *)0x0) {
            pTVar5 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                      *)(plVar9 + 1);
            goto LAB_14e5238f0;
          }
          break;
        }
        iVar4 = (int)plVar9[3];
      } while (iVar4 != -1);
    }
  }
  pTVar5 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<UClass_*_const_&>
                     ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FillCustomAttributeDelegates,uVar11,&local_res18);
LAB_14e5238f0:
  ::FString::FString(&local_e8,param_1);
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  local_d8 = param_3;
  local_d0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1____AddApplyAndFillDelegates_W4ELightUnits___UInterchangeFactoryBaseNode__QEAAXAEBVFString__PEAVUClass__VFName___Z___V__6B_
    ;
    ::FString::FString((FString *)(puVar6 + 3),&local_e8);
    *(FName *)(puVar6 + 5) = local_d8;
    puVar6[6] = local_d0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_120) &&
     ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)pTVar5->ArrayMax * 0x18)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  pTVar5->ArrayNum = iVar4 + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if (*(void **)(pFVar1 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar8 * 0x18 + 8) =
       local_118.DelegateAllocator;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar1 + lVar8 * 0x18 + 0x10) = local_118.DelegateSize;
  local_118.DelegateSize = 0;
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// ApplyAttributeToObject<TEnumAsByte<enum_EBlendMode>_> @ 14e523b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_EBlendMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<TEnumAsByte<enum_EMaterialShadingModel>_> @ 14e523e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_EMaterialShadingModel>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<TEnumAsByte<enum_ERefractionMode>_> @ 14e524130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ERefractionMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<TEnumAsByte<enum_ETranslucencyLightingMode>_> @ 14e524420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<TEnumAsByte<enum_TextureAddress>_> @ 14e524710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_TextureAddress>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<TEnumAsByte<enum_ECameraProjectionMode::Type>_> @ 14e524a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<TEnumAsByte<enum_ECameraProjectionMode::Type>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<enum_ECameraFocusMethod> @ 14e524cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<enum_ECameraFocusMethod>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ApplyAttributeToObject<enum_ELightUnits> @ 14e524fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::ApplyAttributeToObject<enum_ELightUnits>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  TAttributeHandle<unsigned_char,void> *pTVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  FProperty *this_00;
  uchar *puVar10;
  ulonglong uVar11;
  FName local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  uchar local_d8 [8];
  FString local_d0;
  FString local_c0;
  TAttributeHandle<unsigned_char,void> local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  TVariant<UObject_*,unsigned_char_*> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 != (UObject *)0x0) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pcVar2 = *(code **)(this->_padding_ + 0x2c0);
    local_res20 = param_3;
    ::FString::operator=(&local_d0,param_1);
    cVar4 = (*pcVar2)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      ::FString::operator=(&local_c0,param_1);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar7 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         ((FAttributeStorage *)this->_padding_,&local_68,(FAttributeKey *)&local_c0)
      ;
      UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
      TAttributeHandle<unsigned_char,void>(&local_b0,&pTVar7->Key,pTVar7->AttributeStorage);
      if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                        (&local_b0);
      if (bVar5) {
        EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                          (&local_b0,local_d8);
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        if (EVar8 == Operation_Success) {
          local_50.TypeIndex = 0;
          local_50._padding_ = (longlong)param_2;
          pFVar9 = ::FName::ToString(&local_res20,&local_78);
          local_98 = (pFVar9->Data).AllocatorInstance.Data;
          iVar1 = (pFVar9->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_88._12_4_ = uStack_8c;
          local_88.Size = iStack_90;
          local_88.DataPtr = (wchar_t *)local_98;
          this_00 = InterchangePrivateNodeBase::FindPropertyByPathChecked
                              (&local_50,*(UStruct **)&param_2->field_0x10,&local_88);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (this_00 != (FProperty *)0x0) {
            uVar11 = (ulonglong)local_50.TypeIndex;
            if ((1 < local_50.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar11) != '\0') {
              if ((local_50.TypeIndex != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              puVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)local_50._padding_,0);
              *puVar10 = local_d8[0];
              return true;
            }
            if ((local_50.TypeIndex != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar3 = local_50._padding_;
            if (this_00->ArrayDim < 1) {
              local_e8 = 0;
              local_e0 = this_00->ArrayDim;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
            }
            if (((UObject *)lVar3 == (UObject *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ((undefined1 *)lVar3)[this_00->Offset_Internal] = local_d8[0];
          }
          return true;
        }
      }
      else if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// FillAttributeFromObject<TEnumAsByte<enum_EBlendMode>_> @ 14e526450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_EBlendMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<EBlendMode> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<EBlendMode> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_EBlendMode>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<TEnumAsByte<enum_EMaterialShadingModel>_> @ 14e526680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_EMaterialShadingModel>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<EMaterialShadingModel> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<EMaterialShadingModel> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_EMaterialShadingModel>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<TEnumAsByte<enum_ERefractionMode>_> @ 14e5268b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ERefractionMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<ERefractionMode> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<ERefractionMode> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ERefractionMode>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<TEnumAsByte<enum_ETranslucencyLightingMode>_> @ 14e526ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ETranslucencyLightingMode>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<ETranslucencyLightingMode> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<ETranslucencyLightingMode> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ETranslucencyLightingMode>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<TEnumAsByte<enum_TextureAddress>_> @ 14e526d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_TextureAddress>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<TextureAddress> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<TextureAddress> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_TextureAddress>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<TEnumAsByte<enum_ECameraProjectionMode::Type>_> @ 14e526f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<TEnumAsByte<enum_ECameraProjectionMode::Type>_>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  TEnumAsByte<ECameraProjectionMode::Type> *pTVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = (TEnumAsByte<ECameraProjectionMode::Type> *)
               ((undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4));
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ECameraProjectionMode::Type>_>
                        ((UInterchangeBaseNode *)this,param_1,pTVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pTVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<enum_ECameraFocusMethod> @ 14e527170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<enum_ECameraFocusMethod>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  ECameraFocusMethod *pEVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pEVar7 = (undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4);
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pEVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<enum_ECameraFocusMethod>
                        ((UInterchangeBaseNode *)this,param_1,pEVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pEVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

// FillAttributeFromObject<enum_ELightUnits> @ 14e5273a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeFactoryBaseNode::FillAttributeFromObject<enum_ELightUnits>
          (UInterchangeFactoryBaseNode *this,FString *param_1,UObject *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FBoolProperty *this_00;
  ELightUnits *pEVar7;
  ulonglong uVar8;
  FName local_res20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  bool local_88 [16];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  TVariant<UObject_*,unsigned_char_*> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_48.TypeIndex = 0;
  local_res20 = param_3;
  local_48._padding_ = (longlong)param_2;
  pFVar6 = ::FName::ToString(&local_res20,&local_58);
  local_78 = (pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  this_00 = (FBoolProperty *)
            InterchangePrivateNodeBase::FindPropertyByPathChecked
                      (&local_48,*(UStruct **)&param_2->field_0x10,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FBoolProperty *)0x0) {
    bVar4 = false;
  }
  else {
    uVar8 = (ulonglong)local_48.TypeIndex;
    if ((1 < local_48.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,unsigned_char*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_48.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar3 = local_48._padding_;
      iVar1 = (int)this_00->_padding_;
      if (iVar1 < 1) {
        local_98 = 0;
        local_90 = iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((UObject *)lVar3 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pEVar7 = (undefined1 *)lVar3 + *(int *)((longlong)&this_00->_padding_ + 4);
    }
    else {
      if ((local_48.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pEVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this_00,(UObject *)local_48._padding_,0);
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = UInterchangeBaseNode::SetAttribute<enum_ELightUnits>
                        ((UInterchangeBaseNode *)this,param_1,pEVar7);
    }
    else {
      local_88[0] = FBoolProperty::GetPropertyValue(this_00,pEVar7);
      bVar4 = UInterchangeBaseNode::SetAttribute<bool>
                        ((UInterchangeBaseNode *)this,param_1,local_88);
    }
  }
  return bVar4;
}

