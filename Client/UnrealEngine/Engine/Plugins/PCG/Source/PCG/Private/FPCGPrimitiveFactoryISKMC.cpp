// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// GetNumPrimitives @ 149759f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FPCGPrimitiveFactoryISKMC::GetNumPrimitives(FPCGPrimitiveFactoryISKMC *this)

{
  return (this->Components).ArrayNum;
}

// Create @ 1497fab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGPrimitiveFactoryISKMC::Create(FPCGPrimitiveFactoryISKMC *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  IPCGGraphExecutionSource *pIVar3;
  USceneComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  FWeakObjectPtr *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  UPCGComponent *pUVar12;
  UClass *pUVar13;
  UPCGManagedISKMComponent *this_00;
  UInstancedSkinnedMeshComponent *pUVar14;
  UObject *pUVar15;
  double *pdVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  FPCGContext *pFVar20;
  uint uVar21;
  FWeakObjectPtr *pFVar22;
  undefined1 auStack_228 [32];
  FWeakObjectPtr *local_208;
  FWeakObjectPtr *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  FWeakObjectPtr local_1d8;
  FPCGContext *local_1d0;
  UInstancedSkinnedMeshComponent *local_1c8;
  undefined1 local_1c0 [56];
  FWeakObjectPtr local_188;
  FWeakObjectPtr FStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 local_148 [16];
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  byte local_124;
  byte local_123;
  FScriptContainerElement local_122;
  FScriptContainerElement local_121;
  FScriptContainerElement local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  FScriptContainerElement local_e0;
  int local_dc;
  undefined4 local_d8;
  longlong local_d0;
  FSoftObjectPath local_c8;
  longlong local_a8;
  FSoftObjectPath local_a0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  undefined8 local_70;
  bool local_68;
  bool local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1d0 = param_1;
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar8)) &&
      (pIVar3 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar3 != (IPCGGraphExecutionSource *)0x0)) &&
     (pUVar12 = (UPCGComponent *)(**(code **)((longlong)*pIVar3 + 8))(),
     pUVar12 != (UPCGComponent *)0x0)) {
    pUVar13 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) goto LAB_1497fac16;
  }
  pUVar12 = (UPCGComponent *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("SourceComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PrimitiveFactories\\PCGPrimitiveFactoryISKMC.cpp"
                     ,0x38,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
LAB_1497fac16:
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
            ((FPCGSoftSkinnedMeshComponentDescriptor *)local_148);
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68 = false;
  local_64 = false;
  pUVar4 = (this->TargetActor->RootComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (USceneComponent *)0x0) {
    local_148[0xc] = (FScriptContainerElement)(pUVar4->Mobility).Value;
  }
  uVar21 = 0x100;
  if ((this->Descriptors).ArrayNum < 0x100) {
    uVar21 = (this->Descriptors).ArrayNum;
  }
  do {
    uVar2 = this->NumPrimitivesProcessed;
    bVar8 = uVar2 == uVar21;
    if ((int)uVar21 <= (int)uVar2) goto LAB_1497fb189;
    iVar11 = (this->Descriptors).ArrayNum;
    uVar10 = 0;
    if ((int)uVar2 < iVar11) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_208 = (FWeakObjectPtr *)(longlong)(int)uVar2;
      local_200 = (FWeakObjectPtr *)(longlong)iVar11;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    pFVar5 = (this->Descriptors).AllocatorInstance.Data;
    lVar19 = (longlong)(int)uVar2 * 0xd8;
    local_148._8_4_ = *(undefined4 *)(pFVar5 + lVar19 + 8);
    local_148[0xc] = pFVar5[lVar19 + 0xc];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pFVar5 + lVar19 + 0x10) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(pFVar5 + lVar19 + 0x10));
    }
    local_138 = *(longlong *)(pFVar5 + lVar19 + 0x10);
    local_130 = *(undefined4 *)(pFVar5 + lVar19 + 0x18);
    local_12c = *(undefined4 *)(pFVar5 + lVar19 + 0x1c);
    local_128 = *(undefined4 *)(pFVar5 + lVar19 + 0x20);
    bVar17 = (byte)pFVar5[lVar19 + 0x24] & 1 | local_124 & 0xfe;
    bVar17 = (bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 2 ^ bVar17;
    bVar17 = (bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 4 ^ bVar17;
    bVar17 = (bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 8 ^ bVar17;
    bVar17 = (bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 0x10 ^ bVar17;
    bVar17 = (bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 0x20 ^ bVar17;
    local_124 = ((bVar17 ^ (byte)pFVar5[lVar19 + 0x24]) & 0x40 ^ bVar17 ^
                (byte)pFVar5[lVar19 + 0x24]) & 0x7f ^ (byte)pFVar5[lVar19 + 0x24];
    local_123 = local_123 & 0xfe | (byte)pFVar5[lVar19 + 0x25] & 1;
    local_123 = (local_123 ^ (byte)pFVar5[lVar19 + 0x25]) & 2 ^ local_123;
    pFVar22 = (FWeakObjectPtr *)(pFVar5 + lVar19 + 0x6c);
    local_122 = pFVar5[lVar19 + 0x26];
    local_121 = pFVar5[lVar19 + 0x27];
    local_120 = pFVar5[lVar19 + 0x28];
    local_118 = *(longlong *)(pFVar5 + lVar19 + 0x30);
    lStack_110 = *(longlong *)(pFVar5 + lVar19 + 0x30 + 8);
    local_108 = *(longlong *)(pFVar5 + lVar19 + 0x40);
    lStack_100 = *(longlong *)(pFVar5 + lVar19 + 0x40 + 8);
    local_f8 = *(longlong *)(pFVar5 + lVar19 + 0x50);
    lStack_f0 = *(longlong *)(pFVar5 + lVar19 + 0x50 + 8);
    local_e8 = *(longlong *)(pFVar5 + lVar19 + 0x60);
    local_e0 = pFVar5[lVar19 + 0x68];
    local_dc = pFVar22->ObjectIndex;
    local_d8 = *(undefined4 *)(pFVar5 + lVar19 + 0x70);
    local_d0 = *(longlong *)(pFVar5 + lVar19 + 0x78);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)(local_148 + 0x80),(FSoftObjectPath *)(pFVar5 + lVar19 + 0x80));
    local_a8 = *(longlong *)(pFVar5 + lVar19 + 0xa0);
    FSoftObjectPath::operator=(&local_a0,(FSoftObjectPath *)(pFVar5 + lVar19 + 0xa8));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_80,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + lVar19 + 200));
    pFVar20 = local_1d0;
    this_00 = UPCGActorHelpers::GetOrCreateManagedABMC
                        (this->TargetActor,pUVar12,
                         (FPCGSkinnedMeshComponentBuilderParams *)local_148,local_1d0);
    if (this_00 != (UPCGManagedISKMComponent *)0x0) {
      pUVar14 = UPCGManagedISKMComponent::GetComponent(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UInstancedSkinnedMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      local_1d8.ObjectIndex = 0;
      local_1d8.ObjectSerialNumber = 0;
      local_1c8 = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UInstancedSkinnedMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1c8);
      pFVar6 = (FWeakObjectPtr *)(this->Components).AllocatorInstance.Data;
      if ((pFVar6 <= &local_1d8) &&
         (lVar18 = (longlong)(this->Components).ArrayMax, &local_1d8 < pFVar6 + lVar18)) {
        local_1f0 = (longlong)(this->Components).ArrayNum;
        local_1e8 = 8;
        local_208 = &local_1d8;
        local_200 = pFVar6;
        local_1f8 = lVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->Components).ArrayNum;
      piVar1 = &(this->Components).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->Components).AllocatorInstance,piVar1);
      }
      (this->Components).ArrayNum = iVar11 + 1;
      *(FWeakObjectPtr *)((this->Components).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_1d8;
      pFVar6 = (FWeakObjectPtr *)(this->NumInstances).AllocatorInstance.Data;
      if ((pFVar6 <= pFVar22) &&
         (lVar18 = (longlong)(this->NumInstances).ArrayMax,
         pFVar22 < (FWeakObjectPtr *)(&pFVar6->ObjectIndex + lVar18))) {
        local_1f0 = (longlong)(this->NumInstances).ArrayNum;
        local_1e8 = 4;
        local_208 = pFVar22;
        local_200 = pFVar6;
        local_1f8 = lVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->NumInstances).ArrayNum;
      piVar1 = &(this->NumInstances).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->NumInstances).AllocatorInstance,piVar1);
      }
      (this->NumInstances).ArrayNum = iVar11 + 1;
      *(int *)((this->NumInstances).AllocatorInstance.Data + (longlong)iVar11 * 4) =
           pFVar22->ObjectIndex;
      pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar5 + lVar19 + 0x78));
      if (pUVar15 == (UObject *)0x0) {
LAB_1497fb03e:
        pUVar15 = (UObject *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_USkinnedAsset_NoRegister();
        iVar11 = (int)pUVar13->_padding_;
        if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar13->_padding_)) goto LAB_1497fb03e;
      }
      pdVar16 = (double *)(**(code **)(*(longlong *)pUVar15 + 0x3e0))(pUVar15,local_1c0);
      pFVar22 = (FWeakObjectPtr *)(this->MeshBounds).AllocatorInstance.Data;
      local_188 = (FWeakObjectPtr)(*pdVar16 - pdVar16[3]);
      dStack_170 = *pdVar16 + pdVar16[3];
      FStack_180 = (FWeakObjectPtr)(pdVar16[1] - pdVar16[4]);
      local_178 = pdVar16[2] - pdVar16[5];
      local_158 = 1;
      local_168._8_4_ = SUB84(pdVar16[2] + pdVar16[5],0);
      local_168._0_8_ = pdVar16[1] + pdVar16[4];
      local_168._12_4_ = (int)((ulonglong)(pdVar16[2] + pdVar16[5]) >> 0x20);
      if ((pFVar22 <= &local_188) &&
         (lVar19 = (longlong)(this->MeshBounds).ArrayMax, &local_188 < pFVar22 + lVar19 * 7)) {
        local_1f0 = (longlong)(this->MeshBounds).ArrayNum;
        local_1e8 = 0x38;
        local_208 = &local_188;
        local_200 = pFVar22;
        local_1f8 = lVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->MeshBounds).ArrayNum;
      piVar1 = &(this->MeshBounds).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->MeshBounds).AllocatorInstance,piVar1);
      }
      (this->MeshBounds).ArrayNum = iVar11 + 1;
      lVar19 = (longlong)iVar11 * 0x38;
      pFVar5 = (this->MeshBounds).AllocatorInstance.Data;
      *(FWeakObjectPtr *)(pFVar5 + lVar19) = local_188;
      ((FWeakObjectPtr *)(pFVar5 + lVar19))[1] = FStack_180;
      *(double *)(pFVar5 + lVar19 + 0x10) = local_178;
      *(double *)(pFVar5 + lVar19 + 0x10 + 8) = dStack_170;
      *(undefined8 *)(pFVar5 + lVar19 + 0x20) = local_168._0_8_;
      *(undefined8 *)(pFVar5 + lVar19 + 0x20 + 8) = local_168._8_8_;
      *(ulonglong *)(pFVar5 + lVar19 + 0x30) = CONCAT71(uStack_157,local_158);
      pFVar20 = local_1d0;
    }
    this->NumPrimitivesProcessed = this->NumPrimitivesProcessed + 1;
  } while (((int)uVar21 <= this->NumPrimitivesProcessed) ||
          (bVar8 = FPCGAsyncState::ShouldStop(&pFVar20->AsyncState), !bVar8));
  bVar8 = false;
LAB_1497fb189:
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)local_148);
  return bVar8;
}

// GetMeshBounds @ 149815e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
FPCGPrimitiveFactoryISKMC::GetMeshBounds
          (FPCGPrimitiveFactoryISKMC *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TBox<double> *pTVar9;
  double *pdVar10;
  longlong lVar11;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_50 [6];
  undefined1 local_20;
  
  if ((param_1 < 0) || ((this->MeshBounds).ArrayNum <= param_1)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3979733588579975068>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PrimitiveFactories\\PCGPrimitiveFactoryISKMC.cpp"
                       ,100,"MeshBounds.IsValidIndex(InPrimitiveIndex)");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TBox<double> *)(*pcVar3)();
      return pTVar9;
    }
    local_20 = 0;
    pdVar10 = local_50;
  }
  else {
    if (param_1 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TBox<double> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pFVar2 = (this->MeshBounds).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 * 0x38;
    local_88 = *(double *)(pFVar2 + lVar11);
    uStack_80 = *(undefined8 *)(pFVar2 + lVar11 + 8);
    local_78 = *(undefined8 *)(pFVar2 + lVar11 + 0x10);
    uStack_70 = *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8);
    pdVar10 = &local_88;
    local_68 = *(undefined8 *)(pFVar2 + lVar11 + 0x20);
    uStack_60 = *(undefined8 *)(pFVar2 + lVar11 + 0x20 + 8);
    local_58 = *(undefined8 *)(pFVar2 + lVar11 + 0x30);
  }
  dVar1 = pdVar10[1];
  dVar4 = pdVar10[2];
  dVar5 = pdVar10[3];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar6 = pdVar10[4];
  dVar7 = pdVar10[5];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar5;
  dVar1 = pdVar10[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar7;
  *(double *)&__return_storage_ptr__->IsValid = dVar1;
  return __return_storage_ptr__;
}

// GetNumInstances @ 1498164d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FPCGPrimitiveFactoryISKMC::GetNumInstances(FPCGPrimitiveFactoryISKMC *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NumInstances).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NumInstances).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->NumInstances).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetSceneProxy @ 14981b300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FPCGPrimitiveFactoryISKMC::GetSceneProxy(FPCGPrimitiveFactoryISKMC *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveSceneProxy *pFVar4;
  UObject *pUVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    pFVar4 = (FPrimitiveSceneProxy *)0x0;
    uVar3 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid
                      ((FWeakObjectPtr *)
                       ((this->Components).AllocatorInstance.Data + (longlong)param_1 * 8));
    if (bVar2) {
      uVar3 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
          return pFVar4;
        }
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->Components).AllocatorInstance.Data +
                                   (longlong)param_1 * 8));
      if (*(longlong *)&pUVar5[0x21].field_0x8 != *(longlong *)&pUVar5[0x14].field_0x10) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneProxy == SceneData.SceneProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                           ,0x801,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar4 = *(FPrimitiveSceneProxy **)&pUVar5[0x14].field_0x10;
    }
    return pFVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3979733588579975150>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PrimitiveFactories\\PCGPrimitiveFactoryISKMC.cpp"
                     ,0x12,"Components.IsValidIndex(InPrimitiveIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar4;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// Initialize @ 14981dec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGPrimitiveFactoryISKMC::Initialize(FPCGPrimitiveFactoryISKMC *this,FParameters *param_1)

{
  TArray<FPCGSoftSkinnedMeshComponentDescriptor,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar4;
  
  pTVar1 = &this->Descriptors;
  if ((FParameters *)pTVar1 != param_1) {
    DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
              ((FPCGSoftSkinnedMeshComponentDescriptor *)(pTVar1->AllocatorInstance).Data,
               (this->Descriptors).ArrayNum);
    iVar3 = (param_1->Descriptors).ArrayNum;
    piVar2 = &(this->Descriptors).ArrayMax;
    pFVar4 = (FPCGSoftSkinnedMeshComponentDescriptor *)(param_1->Descriptors).AllocatorInstance.Data
    ;
    (this->Descriptors).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FPCGSoftSkinnedMeshComponentDescriptor,FPCGSoftSkinnedMeshComponentDescriptor,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
    this->TargetActor = param_1->TargetActor;
    return;
  }
  this->TargetActor = param_1->TargetActor;
  return;
}

// IsRenderStateCreated @ 149820bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPCGPrimitiveFactoryISKMC::IsRenderStateCreated(FPCGPrimitiveFactoryISKMC *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(this->_padding_ + 8))();
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(this->_padding_ + 0x10))(this,iVar3);
      if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x228) == 0)) ||
         (*(int *)(*(longlong *)(lVar2 + 0x228) + 0x224) == -1)) {
        return false;
      }
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(this->_padding_ + 8))(this);
    } while (iVar3 < iVar1);
  }
  return true;
}

